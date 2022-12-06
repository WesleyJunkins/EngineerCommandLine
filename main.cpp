//Math Worker by Wesley Junkins
//Excuse the mess. This needs A LOT of work...
//Version 1

#include <iostream>
#include <string>
#include <math.h>
#include <array>
using namespace std;

int main()
{
    
    //DECLARE VARIABLES
    int pageIdentifier = 0;
    int simpCalcPageIdentifier;
    float addFirstNum;
    float addSecondNum;
    float addAnswer;
    float subtractFirstNum;
    float subtractSecondNum;
    float subtractAnswer;
    float multiplyFirstNum;
    float multiplySecondNum;
    float multiplyAnswer;
    float divideFirstNum;
    float divideSecondNum;
    float divideAnswer;
    float summationI;
    float summationN;
    float summationX;
    char summationXNumber;
    float summationAnswerNumber;
    float summationAnswerNumberFirst;
    char summationExit;
    int summationXPower;
    float summationAnswerPower = 0.0;
    float factoringExp2NumA;
    float factoringExp2NumB;
    float factoringExp2NumC;
    float factoringAnswerPlus;
    float factoringAnswerMinus;
    char factoringExit;
    float exponentBase;
    float exponentPower;
    float exponentAnswer;
    char exponentExit;
    int convertPageIdentifier = 0;
    double unitToConvert = 0;
    double convertedAnswer = 0;
    
    
    
    while(pageIdentifier == 0)
    {
    //MAIN PAGE
    {
    cout<<"\n------------------------------";
    cout<<"\nWelcome to Math Worker\n\nWhat would you like to do?";
    cout<<"\n(1)Simple Calculator";
    cout<<"\n(2)Summation";
    cout<<"\n(3)Factoring";
    cout<<"\n(4)Exponents";
    cout<<"\n(5)Convert";
    cout<<"\n(0)Exit";
    cout<<"\n";
    cin>>pageIdentifier;
    }
    
    //SUB PAGES
    //SIMPLE CALC PAGE
        while(pageIdentifier == 1)
        {
        cout<<"\n------------------------------";
        cout<<"\nSimple Calculator\n";
        cout<<"\n(1)Add\n(2)Subtract\n(3)Multiply\n(4)Divide\n(0)exit\n";
        cin>>simpCalcPageIdentifier;
        if (simpCalcPageIdentifier == 1)
        {
            cout<<"\nAdd";
            cout<<"\nFirst Number: ";
            cin>>addFirstNum;
            cout<<"\nSecond Number: ";
            cin>>addSecondNum;
            addAnswer = (addFirstNum + addSecondNum);
            cout<<"\nAnswer: "<<addAnswer;
            pageIdentifier = 1;
        }else if (simpCalcPageIdentifier == 2)
        {
            cout<<"\nSubtract";
            cout<<"\nFirst Number: ";
            cin>>subtractFirstNum;
            cout<<"\nSecond Number: ";
            cin>>subtractSecondNum;
            subtractAnswer = (subtractFirstNum - subtractSecondNum);
            cout<<"\nAnswer: "<<subtractAnswer;
            pageIdentifier = 1;
        }else if (simpCalcPageIdentifier == 3)
        {
            cout<<"\nMultiply";
            cout<<"\nFirst Number: ";
            cin>>multiplyFirstNum;
            cout<<"\nSecond Number: ";
            cin>>multiplySecondNum;
            multiplyAnswer = (multiplyFirstNum * multiplySecondNum);
            cout<<"\nAnswer: "<<multiplyAnswer;
            pageIdentifier = 1;
        }else if (simpCalcPageIdentifier == 4)
        {
            cout<<"\nDivide";
            cout<<"\nFirst Number: ";
            cin>>divideFirstNum;
            cout<<"\nSecond Number: ";
            cin>>divideSecondNum;
            divideAnswer = (divideFirstNum / divideSecondNum);
            cout<<"\nAnswer: "<<divideAnswer;
            pageIdentifier = 1;
        }else if (simpCalcPageIdentifier == 0)
        {
            pageIdentifier = 0;
        }
    }
    //END SIMPLE CALC PAGE
        
    //DERIVATIVE PAGE
        while(pageIdentifier == 6)
        {
            char differentiateThis[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
            cout<<"\nInsert your function below. Hit enter to calculate the derivative.\n";
            
            //Allow user to insert a function to be differentiated
            for(int u = 0; u <=29; u++)
            {
                cin>>differentiateThis[u];
                if(differentiateThis[u] == 'd')
                {
                    u = 30;
                }
            }

            
            //If part 0-5 is sin
            if((differentiateThis[0] == 's')&&(differentiateThis[1] == 'i')&&(differentiateThis[2] == 'n')&&(differentiateThis[3] == '(')&&(differentiateThis[5] == ')'))
            {
                cout<<"\nsin of "<<differentiateThis[4];
            }
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        }
        
    //GRAPHING PAGE
        
    while(pageIdentifier == 7)
    {
        int xChangeVar = 0;
        char gvar1;
        char gvar2;
        char gvar3;
        char gvar4;
        char gvar5;
        char gvar6;
        char gvar7;
        char gvar8;
        char gvar9;
        char gvar10;
        float finalEqu;
        

            cout<<"\nEnter a function using x as a variable.";
            cout<<"\ny= ";
            cin>>gvar1>>gvar2>>gvar3>>gvar4>>gvar5>>gvar6>>gvar7>>gvar8>>gvar9>>gvar10;
            if(gvar1 == 'x')
            {
                finalEqu = xChangeVar;
            }
            

            
            
            
            
            
            
            
            
            
            //Graphing with respect to x
            for(int y = 20; y >= -20; y--)
            {
                
                if(y == 0)
                {
                    cout<<"---------------------+---------------------\n";
                    y--;
                }
                for(xChangeVar = -20; xChangeVar <= 20; xChangeVar++)
                {
                    if(y == xChangeVar)
                    {
                        cout<<"*";
                    }else if(y != xChangeVar)
                    {
                        cout<<" ";
                    }
                    if(xChangeVar == 0)
                    {
                        cout<<"|";
                    }
                }
                
                cout<<"\n";
            }

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
    //SUMMATION PAGE
        while(pageIdentifier == 2)
        {
            cout<<"\n------------------------------";
            cout<<"\nSummation\n";
            cout<<"\n   n   ";
            cout<<"\n********";
            cout<<"\n *    *";
            cout<<"\n  *";
            cout<<"\n   *     X";
            cout<<"\n  *";
            cout<<"\n *    *";
            cout<<"\n********";
            cout<<"\n  i=?";
            cout<<"\n\nEnter the following information in accordance with the above diagram:";
            cout<<"\nIs X a number? (y or n)\n";
            cin>>summationXNumber;
            if (summationXNumber == 'y')
            {
                cout<<"\ni= ";
                cin>>summationI;
                cout<<"\nn= ";
                cin>>summationN;
                cout<<"\nX= ";
                cin>>summationX;
                summationAnswerNumberFirst = (summationN - summationI);
                summationAnswerNumber = pow(summationX,summationAnswerNumberFirst);
                cout<<"\nAnswer: "<<summationAnswerNumber;
                cout<<"\nWould you like to exit summations? (y or n)\n";
                cin>>summationExit;
                if (summationExit == 'y')
                {
                    break;
                }else if (summationExit == 'n')
                {
                    pageIdentifier = 2;
                }
            }else if (summationXNumber == 'n')
            {
                cout<<"\ni= 1";
                cout<<"\n\nn= ";
                cin>>summationN;
                cout<<"\nIs X raised to the 1, 2, or 3 power?\n";
                cin>>summationXPower;
                if (summationXPower == 1)
                {
                    summationAnswerPower = ((summationN*(summationN+1))/2);
                }else if (summationXPower == 2)
                {
                    summationAnswerPower = ((summationN*(summationN+1)*(2*summationN+1))/6);
                }else if (summationXPower == 3)
                {
                    summationAnswerPower = (((pow(summationN,2))*(pow(summationN+1,2)))/4);
                }
                cout<<"\nAnswer: "<<summationAnswerPower;
                cout<<"\nWould you like to exit summations? (y or n)\n";
                cin>>summationExit;
                if (summationExit == 'y')
                {
                    pageIdentifier = 0;
                }else if (summationExit == 'n')
                {
                    pageIdentifier = 30;
                }
            }
           
        }
        //END SUMMATION PAGE
        
        //FACTORING PAGE
        while(pageIdentifier == 3)
        {
            cout<<"\n------------------------------";
            cout<<"\nFactoring";
            cout<<"\n\nax^2 + bx + c";
            cout<<"\na= ";
            cin>>factoringExp2NumA;
            cout<<"\nb= ";
            cin>>factoringExp2NumB;
            cout<<"\nc= ";
            cin>>factoringExp2NumC;
            factoringAnswerPlus = (((-factoringExp2NumB)+sqrt(pow(factoringExp2NumB,2)-4*(factoringExp2NumA)*(factoringExp2NumC)))/(2*factoringExp2NumA));
            factoringAnswerMinus = (((-factoringExp2NumB)-sqrt(pow(factoringExp2NumB,2)-4*(factoringExp2NumA)*(factoringExp2NumC)))/(2*factoringExp2NumA));
            cout<<"\nAnswer: x= "<<factoringAnswerPlus<<", x= "<<factoringAnswerMinus;
            cout<<"\nWould you like to exit factoring? (y or n)\n";
            cin>>factoringExit;
            if (factoringExit == 'y')
            {
                pageIdentifier = 0;
            }else if (factoringExit == 'n')
            {
                pageIdentifier = 3;
            }
        }
        //END FACTORING PAGE
        
        //EXIT COMPLETELY PAGE
        if (pageIdentifier == 0)
        {
            return 0;
        }
        //END EXIT COMPLETELY PAGE
        
        //EXPONENT PAGE
        while(pageIdentifier == 4)
        {
            cout<<"\n------------------------------";
            cout<<"\nExponents";
            cout<<"\n\nBase number: ";
            cin>>exponentBase;
            cout<<"\nExponent: ";
            cin>>exponentPower;
            exponentAnswer = pow(exponentBase,exponentPower);
            cout<<"\nAnswer: "<<exponentAnswer;
            cout<<"\nWould you like to exit exponents? (y or n)";
            cin>>exponentExit;
            if (exponentExit == 'y')
            {
                pageIdentifier = 0;
            }else if (exponentExit == 'n')
            {
                pageIdentifier = 4;
            }
        }
        //END EXPONENT PAGE
        
        //Convert page
        while(pageIdentifier == 5)
        {
            cout<<"\n------------------------------";
            cout<<"\nConvert";
            cout<<"\nEnglish/Metric";
            cout<<"\n(1)in > cm";
            cout<<"\n(2)cm > in";
            cout<<"\n(3)ft > m";
            cout<<"\n(4)m > ft";
            cout<<"\n(5)yd > m";
            cout<<"\n(6)m > yd";
            cout<<"\n(7)mile > km";
            cout<<"\n(8)km > mile";
            cout<<"\n(9)acre > square m";
            cout<<"\n(10)square m > acre";
            cout<<"\n(11)US gal > L";
            cout<<"\n(12)L > US gal";
            cout<<"\n(13)UK gal > L";
            cout<<"\n(14)L > UK gal";
            cout<<"\n(15)oz > g";
            cout<<"\n(16)g > oz";
            cout<<"\n(17)lb > kg";
            cout<<"\n(18)kg > lb";
            cout<<"\nTemperature";
            cout<<"\n(19)F > C";
            cout<<"\n(20)C > F";
            cout<<"\n(21)C > K";
            cout<<"\n(22)K > C";
            cout<<"\n(23)km/h > m/s";
            cout<<"\n(24)m/s > km/h";
            cout<<"\n(25)m > picograms";
            cout<<"\n(26)picograms > m";
            cout<<"\nPressure";
            cout<<"\n(27)atm > Pa";
            cout<<"\n(28)Pa > atm";
            cout<<"\n(29)mmHg > Pa";
            cout<<"\n(30)Pa > mmHg";
            cout<<"\n(31)Pa > torr";
            cout<<"\n(32)torr > Pa";
            cout<<"\nPower and Energy";
            cout<<"\n(33)J > kWh";
            cout<<"\n(34)kHh > J";
            cout<<"\n(35)J > cal";
            cout<<"\n(36)cal > J";
            cout<<"\n(37)hp > kW";
            cout<<"\n(38)kW > hp";
            cout<<"\n";
            cin>>convertPageIdentifier;
            
            if(convertPageIdentifier == 1)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----in > cm-----";
                cout<<"\nin =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert * 2.54;
                
                //Return Answer
                cout<<"\ncm =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 2)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----cm > in-----";
                cout<<"\ncm =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert / 2.54;
                
                //Return Answer
                cout<<"\nin =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 3)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----ft > m------";
                cout<<"\nft =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert / 3.281;
                
                //Return Answer
                cout<<"\nm =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 4)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----m > in------";
                cout<<"\nm =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert * 3.281;
                
                //Return Answer
                cout<<"\nin =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 5)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----yd > m------";
                cout<<"\nyd =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert / 1.094;
                
                //Return Answer
                cout<<"\nm =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 6)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----m > yd------";
                cout<<"\nm =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert * 1.094;
                
                //Return Answer
                cout<<"\nyd =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 7)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----mile > km---";
                cout<<"\nmile =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert * 1.609;
                
                //Return Answer
                cout<<"\nkm =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 8)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----km > mile---";
                cout<<"\nkm =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert / 1.609;
                
                //Return Answer
                cout<<"\nmile =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 9)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----acre > m^2--";
                cout<<"\nacre =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert * 4047;
                
                //Return Answer
                cout<<"\nm^2 =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 10)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----m^2 > acre--";
                cout<<"\nm^2 =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert / 4047;
                
                //Return Answer
                cout<<"\nacre =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 11)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----USgal > L---";
                cout<<"\nUSgal =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert * 3.785411784;
                
                //Return Answer
                cout<<"\nL =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 12)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----L > USgal---";
                cout<<"\nL =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert / 3.785411784;
                
                //Return Answer
                cout<<"\nUSgal =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 13)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----UKgal > L-----";
                cout<<"\nUKgal =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert * 4.5460902819948;
                
                //Return Answer
                cout<<"\nL =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
            
            if(convertPageIdentifier == 14)
            {
                unitToConvert = 0;
                convertedAnswer = 0;
                cout<<"\n-----L > UKgal-----";
                cout<<"\nL =\t";
                cin>>unitToConvert;
                
                //Formula
                convertedAnswer = unitToConvert / 4.5460902819948;
                
                //Return Answer
                cout<<"\nUKgal =\t"<<convertedAnswer;
                cout<<"\n-----------------";
            }
        }
    }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

