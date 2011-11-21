#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "/usr/include/realtimebattle/Messagetypes.h"

#define PI 3.141592
#define velocidad1 PI*1.0
#define velocidad2 PI*(-0.1)

int main(int argc, char * argv[])
{
	int objeto = 0;
	double distancia;
	double angulo;
	char buf[2046];

	printf("RobotOption 3 0\n"); 
	printf("Name Mosquito\n");
	printf("Colour ee2299 aaffaa\n");
	printf("Print Obvious troll is obvious!\n");
	fflush(stdout);

	printf("Rotate 7 %lf\n",velocidad1);
	printf("Accelerate 2\n");
  	while (fgets(buf,2046,stdin))
	{
		if(strncmp(buf,"Radar",5)==0)
		{	sscanf(buf,"Radar %lf %i %lf",&distancia,&objeto,&angulo);
			{ 
			if (objeto==0)
				{
					if (distancia<10)	
					{
						printf("Shoot 20.0\n");
						printf("Rotate 7 %lf\n",velocidad2);
						fflush(stdout);
					}
				}
				else
				{
					printf("Rotate 7 %lf\n",velocidad1);
					printf("Accelerate 1.0\n");
					fflush(stdout);
				}
			}
  		}
  	fflush(stdout);
  	}
	return(EXIT_SUCCESS);
}
