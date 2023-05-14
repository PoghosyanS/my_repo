#include <iostream>
#include <vector>


class Ram {
private:
	std::vector<int> memory;
public:
    	Ram() {
        	memory.resize(32);
    	}

    	int read(int address) {
        	return memory[address];
    	}

    	void write(int address, int data) {
        	memory[address] = data;
    	}
};

class ALU {
public:
    	int add(int a, int b) {
        	return a + b;
    	}

    	int subtract(int a, int b) {
        	return a - b;
    	}

    	int multiply(int a, int b) {
        	return a * b;
    	}

    	int divide(int a, int b) {
    		if (b == 0) {
			std::cout<<"error"<<std::endl;
		}
        	return a / b;
    	}
};

class Register {
private:
    	int data;
public:
    	Register() {
        	data = 0;
    	}

    	int arr[7]; 

    	int get_read() {
        	return data;
    	}

    	void write_set(int tmp) {
        	data = tmp;
    	}
};

class Control_Unit {
private:
    	ALU alu;
    	Ram ram;
    	Register reg;
    	int p_counter;
    	int instr;
public:
    	Control_Unit() {
        	p_counter = 0;
        	instr = 0;
    	}

    	void fetch() {
        	instr = ram.read(p_counter);
        	p_counter++;
    	}

    	void decode() {
    		int a = 0xFF;
        	int opcode = instr >> 24;
        	int op3 = ((instr >> 16) & a);
		int op1 = ((instr >> 8) & a) ;
        	int op2 = instr & a;

		reg.arr[5] = ram.read(op1);
		reg.arr[6] = ram.read(op2);
        	switch (opcode) {
            	case 0:
                	std::cout << alu.add(reg.arr[5], reg.arr[6]) << std::endl;
                	break;
            	case 1:
                	std::cout<< alu.subtract(reg.arr[5], reg.arr[6]) << std::endl;
                	break;
            	case 2:
                	std::cout << alu.multiply(reg.arr[5], reg.arr[6]) << std::endl;
                	break;
            	case 3:
                	std::cout << alu.divide(reg.arr[5], reg.arr[6]) << std::endl;
                	break;
            	default:
                	std::cout << "false opcode" << std::endl;
                	break;
        	}
    	}
    	void execute() {
    
            	fetch();
            	decode();
       
    	}
    	void loadProgram(std::vector<int> program) {
        	for (int i = 0; i < program.size(); i++) {
            	ram.write(i, program[i]);
        	}
   	 }	
};

class Cpu{
private:
    	Control_Unit control_unit;
public:
    	void runProgram(std::vector<int> program) {
        	control_unit.loadProgram(program);
        	control_unit.execute();
    	}
};

int main() {
   	std::vector<int> program = {0b00000000'00000011'00000001'00000010,9,2,0};
   	Control_Unit control_unit;
   	control_unit.loadProgram(program);
   	control_unit.execute();

   return 0;
 }

