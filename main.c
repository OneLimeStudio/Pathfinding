#include <stdio.h>
#include <math.h>

int main(void){

	
	int startPoint_x,startPoint_y,endPoint_x,endPoint_y;
	int count =1 ;
	int dist = 0;
	//Random Shit
	
	int matrix[5][5] ={{1,1,1,1,1},
			  		   {1,1,0,1,1},
				   	   {1,1,0,1,1},
					   {1,1,0,1,1},
					   {1,1,1,1,1}};


	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			//matrix[i][j] = count ++;
			printf("%d ",matrix[i][j]);

		}
		printf("\n");
	}
	printf("\n\n\n\n\n");



	//Need to get The Surrounding blocks
	startPoint_x = 0;
	startPoint_y = 0;
	endPoint_x = 4;
	endPoint_y = 4;
	int running = 1,pos_x,pos_y;
	while(running = 1){
		if(startPoint_x > 0){
			pos_x = startPoint_x - 1;
		}else{
			pos_x = startPoint_x;
		}
		if(startPoint_y > 0){
			pos_y = startPoint_y - 1;
		}else{
			pos_y = startPoint_y;
		}
		int min = 100000000,x,y;
		for(int i = pos_x;i < startPoint_x + 2;i++ ){
			for(int j = pos_y; j < startPoint_y + 2;j++){
				dist = 0;
				dist = pow(endPoint_x - i,2) + pow(endPoint_y - j,2);
				if(dist < 0){
					dist = dist * -1;
				}
				if(dist < min && matrix[i][j] != 0){
					min = dist;
					x  = i;
					y = j;
				}
								
			}

		}

		printf("%d,%d \n", x , y);
		startPoint_x = x;
		startPoint_y = y;
		if(x == endPoint_x && y == endPoint_y){
			break;
		}
	}
	return 0;
}