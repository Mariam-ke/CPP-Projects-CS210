/*
Develop code to read data from a text file. Your work should be completed using C++. 
Read the provided document, FahrenheitTemperature.txt, which includes data on the average 
yearly temperature for six different cities in degrees Fahrenheit. Note that a space separates 
each city from its temperature. Assume the city’s name does not include any spaces or special 
characters (the name should consist of only a single word). Also assume the provided temperature 
is presented as an integer. Consider the following steps as you work:
Open the provided file so it is ready to be read. Remember the file is named FahrenheitTemperature.txt. 
Watch out for the class you use, and make sure it is for reading a file and not writing to a file.
Read data from the provided file. Remember, to read this file you will need to declare a variable. 
Begin by reading the first value and putting it in the first variable. Then read the next value and 
put it in the second variable.
Once this is complete, be sure to close the file. This releases the file so it can be used again.


Develop code to write data to a text file. Your work should be completed using C++. Title the new 
document you are creating CelsiusTemperature.txt. The name of the output file needs to be different 
from the name of the input file so you do not overwrite and erase the input file. Consider the 
following steps as you work:
Declare a variable to point to the file that will be written to. Watch out for the class you use, and 
make sure it is for writing to a file and not reading a file.
Create the code instructions for writing data to the new output file. In this new file, include space f
or both the name of the city and the temperature in Celsius for each city included in the original 
input file. You will need to complete the Fahrenheit-to-Celsius conversion calculation before you write 
to the new file. Use the following formula to make this conversion. Note that °F represents the temperature 
in degrees Fahrenheit while °C represents the temperature in degrees Celsius.Open parenthesis degrees F minus 32 
close parenthesis times 5 over 9 equals degrees C.
Close the file once you are done writing to it. If you attempt to look at the results in the file before 
completing this step, your file may appear empty.
*/

#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
	//Variables for city name and temperature
	string cityName;
	int fahrenheit;
	int celsius;

	//READ FROM AND OPEN FILE USING FILE OBJECT

	//Read from file
	ifstream inFile;

	//Open the FahrenheitTemprature.txt file
	inFile.open("FahrenheitTemperature.txt"); 

	//WRITE TO FILE USING FILE OBJECT

	//Create file object to write to file
	ofstream outFile;

	//Open or Create"CelsiusTemperature.txt" File
	outFile.open("CelsiusTemperature.txt");

	//Confirm if input file cannot be open
	if (!inFile) {
		cout << "File cannot be opened" << endl;
	}
	else {
		//Loop to read city name and fahrenheit in each line of the file
		while (inFile >> cityName >> fahrenheit) {
			
			//Convert Fahrenheit to Celsius temprature
			celsius = (int)round(((fahrenheit - 32) * 5)/(double)9);

			//Write city name and celius to CelsiusTemperature.txt
			outFile << cityName << " " << celsius << endl;
		}
	}

	//Close files
	inFile.close();
	outFile.close();

	return 0;
}