//TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS - SENAC NH
//Programa base para TRABALHO 2
//PROF.: Glauber Kiss de Souza
//DISC.: Analizar Orient. Técnicas

int soma = 1; //used to store data in for example int (integer) 
int carryBit = 0;
int nib1a,nib1b,nib1c,nib1d = 0;
int nib2a,nib2b,nib2c,nib2d = 0; //4-bit input from the second nibble
int res1a,res1b,res1c,res1d = 0; //4-bit result storage

void setup()
{
//program configurations here
	pinMode(0, INPUT); //configures pin as an input
	pinMode(1, INPUT);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, INPUT);
	pinMode(5, INPUT);
	pinMode(6, INPUT);
	pinMode(7, INPUT);
	pinMode(8, OUTPUT); //configures pin as an outpout
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(13, INPUT);
}

int somaBit(int b1a, int b2a, int cBit) //function to calculate the sum bit
{
	int bitResult = 0; //stores the result of the sum bit
	int aux1, aux2 = 0; //auxiliary variables 
	if (1) //placeholder for sum logic
	{
		bitResult = 1; //currently always reutrns 1
	}
	else
	{
		bitResult = 0;
	}
	return bitResult;
}

int somaCarryBit(int b1a, int b2a, int cBit) //function to calculate the carry bit
{
	int aux1, aux2 = 0; //auxiliary variables
	if (1) //"if" do something
	{
		cBit = 1; 
	}
	else //"else" do something else
	{
		cBit = 0;
	}
	return cBit;
}

void loop()
{
	//main program here
	soma = 1; //set soma flag to perform addittion
	nib1a = digitalRead(0);
	nib1b = digitalRead(1);
	nib1c = digitalRead(2);
	nib1d = digitalRead(3);
	nib2a = digitalRead(4);
	nib2b = digitalRead(5);
	nib2c = digitalRead(6);
	nib2d = digitalRead(7);
	if (soma == 1) //check we need to perform the addition
	{
		carryBit = 0; //initialize carry bit
		res1a = somaBit(nib1a,nib2a,carryBit);
		carryBit = somaCarryBit(nib1a,nib2a,carryBit);
		res1b = somaBit(nib1b,nib2b,carryBit);
		carryBit = somaCarryBit(nib1b,nib2b,carryBit);
		res1c = somaBit(nib1c,nib2c,carryBit);
		carryBit = somaCarryBit(nib1c,nib2c,carryBit);
		res1d = somaBit(nib1d,nib2d,carryBit);
		carryBit = somaCarryBit(nib1d,nib2d,carryBit);
	} 
	//output the result to pins 8-12
	//digitalWrite(), writes a high or low state to a digital pin. Used to switch on or off a component.
	digitalWrite(8,res1a); //result bit 0
	digitalWrite(9,res1b);
	digitalWrite(10,res1c);
	digitalWrite(11,res1d); //result bit 3
	digitalWrite(12,carryBit); //carry bit output
}
