#include <stdio.h>
#include <string.h>

struct car
{
	char model[50];
		double price1;
			int etoskataskeuhs;
};

int main()
{
    int end = 0;
    	struct car cars[100];

    for (int i = 0; i < 100; i++)
    
    
    {
        printf("dose montelo: ");
        scanf("%s", &cars[i].model);

        printf("dose timh: ");
        scanf("%lf", &cars[i].price1);

        printf("dwse etos kataskeuhs: ");
        scanf("%d", &cars[i].etoskataskeuhs);
        if(cars[i].etoskataskeuhs == -1)
        {
            i = 100;
        }
    }
    
    
    while (end == 0)
    
    
    {
        printf("1. dwse model\n");
        
        printf("2. dwse bash timhs\n");
        
    	printf("3. telos\n");
        
        int epilogh;

        scanf("%d", &epilogh);
        if(epilogh == 1)
        {
            char mdl[50];
            printf("anazhthsh model: ");
            scanf("%s", &mdl);

            
            for (int i = 0; i < 100; i++)
            {
                if(strcmp(mdl,"*")==0)
                {
                    if(cars[i].price1 > 0 && cars[i].etoskataskeuhs > 0)
                    {
                        printf("model: %s\n",cars[i].model);
                        printf("timh: %lf\n",cars[i].price1);
                        printf("etos kataskeuhs: %d\n",cars[i].etoskataskeuhs);
                    }
                }
                if(strcmp(cars[i].model,mdl)==0)
                {
                    printf("model: %s\n",cars[i].model);
                    printf("timh: %lf\n",cars[i].price1);
                    printf("etos kataskeuhs: %d\n",cars[i].etoskataskeuhs);
                    i=101;
                }
            }
        }
        else if(epilogh == 2)
        {
            double price2 = 0.0;
           printf("dwse timh:");
           scanf("%lf",&price2);
            for(int i = 0;i<99;i++)
            {
                for (int j = 0; j < 99-i; j++)
                {
                    if(cars[j].price1 > cars[j+1].price1)
                    {
                        struct car temp = cars[j];
                        cars[j] = cars[j+1];
                        cars[j+1] = temp;
                    }
                }
            }
            for (int i = 0; i < 100; i++)
            {
                
                if(cars[i].price1 > price2 && cars[i].etoskataskeuhs > 0)
                {
                    printf("model: %s\n",cars[i].model);
                    printf("timh: %lf\n",cars[i].price1);
                    printf("etos kataskeuhs: %d\n",cars[i].etoskataskeuhs);
                }
            }
            
        }
        else if(epilogh == 3)
        {
            printf("termatismos programmatos\n");
            end = 1;
            return 0;
        }
    }
}
