#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int id;
char name[30];
char mfg[10];
char exp[10];
float rate;
int qty;
}INVENTORY;
INVENTORY i[100];
int iid=10;

typedef struct{
int id;
int medid;
char name[30];
int qty;
float rate;
}CART;
CART cart[100];
int cartid=0;

typedef struct{
int id;
char name[30];
char mfg[10];
char exp[10];
float rate;
int qty;
}INVENTORY_T;
INVENTORY_T it[100];
int iidt=10;

typedef struct{
int id;
int medid;
char name[30];
int qty;
float rate;
}CART_T;
CART_T cartt[100];
int cartidt=0;

typedef struct{
int id;
char name[30];
char mfg[10];
char exp[10];
float rate;
int qty;
}INVENTORY_P;
INVENTORY_P ip[100];
int iidp=10;

typedef struct{
int id;
int medid;
char name[30];
int qty;
float rate;
}CART_P;
CART_P cartp[100];
int cartidp=0;

void list_med(void);
void add_to_inventory(void);
void place_an_order(void);
void add_cart(int,int,char st[30],float,int);
void show_cart(void);

void list_med_t(void);
void add_to_inventory_t(void);
void place_an_order_t(void);
void add_cart_t(int,int,char st[30],float,int);
void show_cart_t(void);

void list_med_p(void);
void add_to_inventory_p(void);
void place_an_order_p(void);
void add_cart_p(int,int,char st[30],float,int);
void show_cart_p(void);


int main(){
    i[0].id=1;strcpy(i[0].name,"Cyclosporine");strcpy(i[0].mfg,"10-05-2020");strcpy(i[0].exp,"10-05-2022");i[0].rate=30;i[0].qty=10;
    i[1].id=2;strcpy(i[1].name,"Avil");strcpy(i[1].mfg,"10-05-2020");strcpy(i[1].exp,"10-05-2022");i[1].rate=130;i[1].qty=10;
    i[2].id=3;strcpy(i[2].name,"Crocin");strcpy(i[2].mfg,"10-05-2020");strcpy(i[2].exp,"10-05-2022");i[2].rate=60;i[2].qty=10;
    i[3].id=4;strcpy(i[3].name,"Dolo");strcpy(i[3].mfg,"10-05-2020");strcpy(i[3].exp,"10-05-2022");i[3].rate=20;i[3].qty=10;
    i[4].id=5;strcpy(i[4].name,"Roko");strcpy(i[4].mfg,"10-05-2020");strcpy(i[4].exp,"10-05-2022");i[4].rate=240;i[4].qty=10;
    i[5].id=6;strcpy(i[5].name,"Glimy-m");strcpy(i[5].mfg,"10-05-2020");strcpy(i[5].exp,"10-05-2022");i[5].rate=210;i[5].qty=10;
    i[6].id=7;strcpy(i[6].name,"Telmikind-40");strcpy(i[6].mfg,"10-05-2020");strcpy(i[6].exp,"10-05-2022");i[6].rate=50;i[6].qty=10;
    i[7].id=8;strcpy(i[7].name,"Clavam");strcpy(i[7].mfg,"10-05-2020");strcpy(i[7].exp,"10-05-2022");i[7].rate=195;i[7].qty=10;
    i[8].id=9;strcpy(i[8].name,"Aztor");strcpy(i[8].mfg,"10-05-2020");strcpy(i[8].exp,"10-05-2022");i[8].rate=245;i[8].qty=10;
    i[9].id=10;strcpy(i[9].name,"Okacet");strcpy(i[9].mfg,"10-05-2020");strcpy(i[9].exp,"10-05-2022");i[9].rate=304;i[9].qty=10;

    it[0].id=1;strcpy(it[0].name,"Cyclosporine");strcpy(it[0].mfg,"10-05-2020");strcpy(it[0].exp,"10-05-2022");it[0].rate=30;it[0].qty=10;
    it[1].id=2;strcpy(it[1].name,"Avil");strcpy(it[1].mfg,"10-05-2020");strcpy(it[1].exp,"10-05-2022");it[1].rate=130;it[1].qty=10;
    it[2].id=3;strcpy(it[2].name,"Crocin");strcpy(it[2].mfg,"10-05-2020");strcpy(it[2].exp,"10-05-2022");it[2].rate=60;it[2].qty=10;
    it[3].id=4;strcpy(it[3].name,"Dolo");strcpy(it[3].mfg,"10-05-2020");strcpy(it[3].exp,"10-05-2022");it[3].rate=20;it[3].qty=10;
    it[4].id=5;strcpy(it[4].name,"Roko");strcpy(it[4].mfg,"10-05-2020");strcpy(it[4].exp,"10-05-2022");it[4].rate=240;it[4].qty=10;
    it[5].id=6;strcpy(it[5].name,"Glimy-m");strcpy(it[5].mfg,"10-05-2020");strcpy(it[5].exp,"10-05-2022");it[5].rate=210;it[5].qty=10;
    it[6].id=7;strcpy(it[6].name,"Telmikind-40");strcpy(it[6].mfg,"10-05-2020");strcpy(it[6].exp,"10-05-2022");it[6].rate=50;it[6].qty=10;
    it[7].id=8;strcpy(it[7].name,"Clavam");strcpy(it[7].mfg,"10-05-2020");strcpy(it[7].exp,"10-05-2022");it[7].rate=195;it[7].qty=10;
    it[8].id=9;strcpy(it[8].name,"Aztor");strcpy(it[8].mfg,"10-05-2020");strcpy(it[8].exp,"10-05-2022");it[8].rate=245;it[8].qty=10;
    it[9].id=10;strcpy(it[9].name,"Okacet");strcpy(it[9].mfg,"10-05-2020");strcpy(it[9].exp,"10-05-2022");it[9].rate=304;it[9].qty=10;

    ip[0].id=1;strcpy(ip[0].name,"Cyclosporine");strcpy(ip[0].mfg,"10-05-2020");strcpy(ip[0].exp,"10-05-2022");ip[0].rate=30;ip[0].qty=10;
    ip[1].id=2;strcpy(ip[1].name,"Avil");strcpy(ip[1].mfg,"10-05-2020");strcpy(ip[1].exp,"10-05-2022");ip[1].rate=130;ip[1].qty=10;
    ip[2].id=3;strcpy(ip[2].name,"Crocin");strcpy(ip[2].mfg,"10-05-2020");strcpy(ip[2].exp,"10-05-2022");ip[2].rate=60;ip[2].qty=10;
    ip[3].id=4;strcpy(ip[3].name,"Dolo");strcpy(ip[3].mfg,"10-05-2020");strcpy(ip[3].exp,"10-05-2022");ip[3].rate=20;ip[3].qty=10;
    ip[4].id=5;strcpy(ip[4].name,"Roko");strcpy(ip[4].mfg,"10-05-2020");strcpy(ip[4].exp,"10-05-2022");ip[4].rate=240;ip[4].qty=10;
    ip[5].id=6;strcpy(ip[5].name,"Glimy-m");strcpy(ip[5].mfg,"10-05-2020");strcpy(ip[5].exp,"10-05-2022");ip[5].rate=210;ip[5].qty=10;
    ip[6].id=7;strcpy(ip[6].name,"Telmikind-40");strcpy(ip[6].mfg,"10-05-2020");strcpy(ip[6].exp,"10-05-2022");ip[6].rate=50;ip[6].qty=10;
    ip[7].id=8;strcpy(ip[7].name,"Clavam");strcpy(ip[7].mfg,"10-05-2020");strcpy(ip[7].exp,"10-05-2022");ip[7].rate=195;ip[7].qty=10;
    ip[8].id=9;strcpy(ip[8].name,"Aztor");strcpy(ip[8].mfg,"10-05-2020");strcpy(ip[8].exp,"10-05-2022");ip[8].rate=245;ip[8].qty=10;
    ip[9].id=10;strcpy(ip[9].name,"Okacet");strcpy(ip[9].mfg,"10-05-2020");strcpy(ip[9].exp,"10-05-2022");ip[9].rate=304;ip[9].qty=10;

    int s,s1,s2,s3,s4,s5;
    jump:
        printf("-----------------------------------------------------------------\n");
        printf("                          Wellness Forever                      |\n");
        printf("----------------------Please choose a branch---------------------\n");
        printf("|                        1.Bandra                               |\n");
        printf("|                        2.Thane                                |\n");
        printf("|                        3.Powai                                |\n");
        printf("|                        4.Exit                                 |\n");
        printf("-----------------------------------------------------------------\n");
        printf("Enter Your Selection : ");
        scanf("%d",&s);
        switch(s)
        {
            case 1: do{
                    printf("\n---------------Wellness Forever (Bandra Branch)-----------------\n");
                    printf("|                 1.Check inventory                             |\n");
                    printf("|                 2.Add to inventory                            |\n");
                    printf("|                 3.Place an order                              |\n");
                    printf("|                 4.Previous Menu                               |\n");
                    printf("-----------------------------------------------------------------\n");
                    printf("Enter Your Selection : ");
                    scanf("%d",&s1);
                    switch(s1)
                    {
                        case 1:list_med();
                        break;
                        case 2:add_to_inventory();
                        break;
                        case 3:place_an_order();
                        break;
                        case 4:goto jump;
                        break;
                        default:printf("Please Enter a Valid Selection : ");
                    }
                }while(s<5);
            break;

            case 2: do{
                    printf("\n---------------Wellness Forever (Thane Branch)------------------\n");
                    printf("|                        1.Check inventory                      |\n");
                    printf("|                        2.Add to inventory                     |\n");
                    printf("|                        3.Place an order                       |\n");
                    printf("|                        4.Previous Menu                        |\n");
                    printf("-----------------------------------------------------------------\n");
                    printf("Enter Your Selection : ");
                    scanf("%d",&s2);
                    switch(s2)
                    {
                        case 1:list_med_t();
                        break;
                        case 2:add_to_inventory_t();
                        break;
                        case 3:place_an_order_t();
                        break;
                        case 4:goto jump;
                        break;
                        default:printf("Please Enter a Valid Selection : ");
                    }
                }while(s<5);
            break;

            case 3: do{
                    printf("\n---------------Wellness Forever (Powai Branch)-----------------\n");
                    printf("|                       1.Check inventory                      |\n");
                    printf("|                       2.Add to inventory                     |\n");
                    printf("|                       3.Place an order                       |\n");
                    printf("|                       4.Previous Menu                        |\n");
                    printf("----------------------------------------------------------------\n");
                    printf("Enter Your Selection : ");
                    scanf("%d",&s3);
                    switch(s3)
                    {
                        case 1:list_med_p();
                        break;
                        case 2:add_to_inventory_p();
                        break;
                        case 3:place_an_order_p();
                        break;
                        case 4:goto jump;
                        break;
                        default:printf("Please Enter a Valid Selection : ");
                    }
                }while(s<5);
            break;

            case 4:exit(0);
            default:printf("Please Enter a Valid Selection : ");
        }     
}

void list_med()
{
    int j;
    printf("-----------Inventory----------\n");
    printf("The Available Medicines Are: \n");
    printf("\tID\tName\tQuantity\tRate\t\n");
    for(j=0;j<iid;j++)
    {
        printf("   %d   \t   %s   \t   %d   \t   %.2f   \t\n",i[j].id,i[j].name,i[j].qty,i[j].rate);
    }
} 
void add_to_inventory(){
    int a;
    int n,m,x,j,y,k,flag=0,nw=0;
    float ry;float sum=0;
    printf("Do you want to add to a pre-existing medicine ?(1-Yes/2-No) ");
    scanf("%d",&a);
    if (a==1){
    printf("Enter the number Of medicine to be added :");
    scanf("%d",&m);
    while(m--)
    {
        printf("Enter the Medicine id: ");
        scanf("%d",&x);
        for(j=0;j<iid;j++)
        {
            if(x==i[j].id)
            {
                printf("Name: %s\n",i[j].name);
                printf("Enter Quantity: ");
                scanf("%d",&y);
                i[j].qty+=y;
                sum+=y*i[j].rate;
                flag++;
                nw++;
                break;
            }
        }
    }
    }
    j=10;
    if (a==2){      
                 printf("Enter the number Of medicine to be added :");
                 scanf("%d",&m);
                 while(m--)
                {       
                        i[j].id=++iid;
                        printf("Enter Name : ");
                        scanf("%s",i[j].name);
                        printf("Enter Quantity: ");
                        scanf("%d",&y);
                        i[j].qty=y;
                        printf("Enter Rate: ");
                        scanf("%f",&ry);
                        i[j].rate=ry;
                        printf("Enter MFG Date(dd-mm-yyy) :   ");
                        scanf("%s",i[j].mfg);
                        printf("Enter EXP Date(dd-mm-yyy) :   ");
                        scanf("%s",i[j].exp);
                        sum+=y*ry;
                        flag++;
                        j++;
                    }
                 }
           
printf("\nInventory Updated!!\\");
}
void place_an_order(){
        int ch,ch1,n,j=0,x,r,m,flag=0,w,del,temp,temp2;
        float amt=0,amt1=0;
        char st[30];
        do{
            printf("--------------------------------------\n");   
            printf("|           1.Add to cart            |\n");
            printf("|           2.Show Cart              |\n");
            printf("|           3.Delete From Cart       |\n");
            printf("|           4.CheckOut               |\n");
            printf("|           5.Exit                   |\n");
            printf("--------------------------------------\n\n");
            printf("Enter Choice: ");
            scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:x=0;
                       printf("\nEnter the Medicine ID: ");
                       scanf("%d",&n);
                       for(j=0;j<100;j++)
                       {
                           if(i[j].id==n)
                           {
                               printf("Medicine Name :%s\n",i[j].name);
                               printf("Medicine rate :%.2f\n",i[j].rate);
                               printf("Enter The Quantity to be purchased: ");
                               scanf("%d",&x);
                               i[j].qty=i[j].qty-x;
                               if ( i[j].qty==1 ) {printf("\n!!!!  PLEASE RESTOCK, running low !!!!\n");}
                               if (i[j].qty ==0) {printf("\n!!!!  THIS MEDICINE IS NOW OUT OF STOCK    !!!!\n");}
                               r=i[j].rate;
                               strcpy(st,i[j].name);
                               add_cart(cartid,n,st,r,x);
                               cartid++;

                               break;
                            }
                       }break;
                case 2:
                       printf("\nYour Cart\n");
                       printf("Cart id\tMedicine Id\tName\tQuantity\tRate\tamount\n ");
                       for(j=0;j<cartid;j++)
                       {
                           amt1=(cart[j].qty*cart[j].rate);
                           printf("     %d\t   %d\t     %s\t    %d\t    %.2f\t    %.2f \n",cart[j].id,cart[j].medid,cart[j].name,cart[j].qty,cart[j].rate,amt1);
                           amt+=amt+(cart[j].qty*cart[j].rate);

                       }
                       break;
                case 3:
                       printf("\n Delete From Cart:");
                       show_cart();
                       printf("\nPlease Enter an CARTID from cart to Delete:  " );
                       scanf("%d",&del);
                      for(j=0;j<=cartid;j++)
                       {
                           if(del==j)
                           {
                               temp2=del+1;
                               temp=del;
                               for(;temp<=cartid;temp++)
                               {
                               cart[temp2].id=cart[temp].id;
                               cart[temp].medid=cart[temp2].medid;
                               strcpy(cart[temp].name,cart[temp2].name);
                               cart[temp].qty=cart[temp2].qty;
                               cart[temp].rate=cart[temp2].rate;
                               temp2++;
                               }
                           }
                       }
                       cartid--;
                       break;
                case 4:
                       amt+=(amt*18)/100;
                       printf("The Total Amount = %.2f\n",amt);
                       break;
                case 5: exit(0);
                   break;
            }
        }while(ch1<6);
}
void add_cart(int y,int n,char st[30],float r,int x)
{
        cart[y].id=y;;
        cart[y].medid=n;
        strcpy(cart[y].name,st);
        cart[y].rate=r;
        cart[y].qty=x;
}

void show_cart()
{                  int j;float amt1;
                   printf("\nYour Cart\n");
                   printf("CartID\tMedicine Id\tName\tQuantity\tRate\tamount\n ");
                   for(j=0;j<cartid;j++)
                   {
                       amt1=(cart[j].qty*cart[j].rate);
                       printf("     %d\t   %d\t     %s \t    %d\t    %.2f\t    %.2f \n",cart[j].id,cart[j].medid,cart[j].name,cart[j].qty,cart[j].rate,amt1);
                   }
}


void list_med_t(void){
    int j;
    printf("-----------Inventory----------\n");
    printf("The Available Medicines Are: \n");
    printf("\tID\tName\tQuantity\tRate\t\n");
    for(j=0;j<iidt;j++)
    {
        printf("   %d   \t   %s   \t   %d   \t   %.2f   \t\n",it[j].id,it[j].name,it[j].qty,it[j].rate);
    }
}
void add_to_inventory_t(void){
int a;
    int n,m,x,j,y,k,flag=0,nw=0;
    float ry;float sum=0;
    printf("Do you want to add to a pre-existing medicine ?(1-Yes/2-No) ");
    scanf("%d",&a);
    if (a==1){
    printf("Enter the number Of medicine to be added :");
    scanf("%d",&m);
    while(m--)
    {
        printf("Enter the Medicine id: ");
        scanf("%d",&x);
        for(j=0;j<iidt;j++)
        {
            if(x==it[j].id)
            {
                printf("Name: %s\n",it[j].name);
                printf("Enter Quantity: ");
                scanf("%d",&y);
                it[j].qty+=y;
                sum+=y*it[j].rate;
                flag++;
                nw++;
                break;
            }
        }
    }
    }
    j=10;
    if (a==2){      
                 printf("Enter the number Of medicine to be added :");
                 scanf("%d",&m);
                 while(m--)
                {       
                        it[j].id=++iidt;
                        printf("Enter Name : ");
                        scanf("%s",it[j].name);
                        printf("Enter Quantity: ");
                        scanf("%d",&y);
                        it[j].qty=y;
                        printf("Enter Rate: ");
                        scanf("%f",&ry);
                        it[j].rate=ry;
                        printf("Enter MFG Date(dd-mm-yyy) :   ");
                        scanf("%s",it[j].mfg);
                        printf("Enter EXP Date(dd-mm-yyy) :   ");
                        scanf("%s",it[j].exp);
                        sum+=y*ry;
                        flag++;
                        j++;
                    }
                 }
           
printf("\nInventory Updated!!\\");
}
void place_an_order_t(void){
int ch,ch1,n,j=0,x,r,m,flag=0,w,del,temp,temp2;
        float amt=0,amt1=0;
        char st[30];
        do{
            printf("--------------------------------------\n");   
            printf("|           1.Add to cart            |\n");
            printf("|           2.Show Cart              |\n");
            printf("|           3.Delete From Cart       |\n");
            printf("|           4.CheckOut               |\n");
            printf("|           5.Exit                   |\n");
            printf("--------------------------------------\n\n");
            printf("Enter Choice: ");
            scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:x=0;
                       printf("\nEnter the Medicine ID: ");
                       scanf("%d",&n);
                       for(j=0;j<100;j++)
                       {
                           if(it[j].id==n)
                           {
                               printf("Medicine Name :%s\n",it[j].name);
                               printf("Medicine rate :%.2f\n",it[j].rate);
                               printf("Enter The Quantity to be purchased: ");
                               scanf("%d",&x);
                               it[j].qty=it[j].qty-x;
                               if (it[j].qty==1)  {printf("\n!!!!  PLEASE RESTOCK, running low !!!!\n");}
                               if (it[j].qty ==0) {printf("\n!!!!  THIS MEDICINE IS NOW OUT OF STOCK    !!!!\n");}
                               r=it[j].rate;
                               strcpy(st,it[j].name);
                               add_cart_t(cartidt,n,st,r,x);
                               cartidt++;
                               break;
                            }
                       }break;
                case 2:
                       printf("\nYour Cart\n");
                       printf("Cart id\tMedicine Id\tName\tQuantity\tRate\tamount\n ");
                       for(j=0;j<cartidt;j++)
                       {
                           amt1=(cartt[j].qty*cartt[j].rate);
                           printf("     %d\t   %d\t     %s\t    %d\t    %.2f\t    %.2f \n",cartt[j].id,cartt[j].medid,cartt[j].name,cartt[j].qty,cartt[j].rate,amt1);
                           amt+=amt+(cartt[j].qty*cartt[j].rate);

                       }
                       break;
                case 3:
                       printf("\n Delete From Cart:");
                       show_cart_t();
                       printf("\nPlease Enter an cartidt from cart to Delete:  " );
                       scanf("%d",&del);
                      for(j=0;j<=cartidt;j++)
                       {
                           if(del==j)
                           {
                               temp2=del+1;
                               temp=del;
                               for(;temp<=cartidt;temp++)
                               {
                               cartt[temp2].id=cartt[temp].id;
                               cartt[temp].medid=cartt[temp2].medid;
                               strcpy(cartt[temp].name,cartt[temp2].name);
                               cartt[temp].qty=cartt[temp2].qty;
                               cartt[temp].rate=cartt[temp2].rate;
                               temp2++;
                               }
                           }
                       }
                       cartidt--;
                       break;
                case 4:
                       amt+=(amt*18)/100;
                       printf("The Total Amount = %.2f\n",amt);
                       break;
                case 5: exit(0);
                   break;
            }
        }while(ch1<6);
}
void add_cart_t(int y,int n,char st[30],float r,int x){
    cartt[y].id=y;;
    cartt[y].medid=n;
    strcpy(cartt[y].name,st);
    cartt[y].rate=r;
    cartt[y].qty=x;
}
void show_cart_t(void){
    int j;float amt1;
    printf("\nYour Cart\n");
    printf("cartidt\tMedicine Id\tName\tQuantity\tRate\tamount\n ");
    for(j=0;j<cartidt;j++)
    {
        amt1=(cartt[j].qty*cartt[j].rate);
        printf("     %d\t   %d\t     %s \t    %d\t    %.2f\t    %.2f \n",cartt[j].id,cartt[j].medid,cartt[j].name,cartt[j].qty,cartt[j].rate,amt1);
    }
}


void list_med_p(void){
    int j;
    printf("-----------Inventory----------\n");
    printf("The Available Medicines Are: \n");
    printf("\tID\tName\tQuantity\tRate\t\n");
    for(j=0;j<iidp;j++)
    {
        printf("   %d   \t   %s   \t   %d   \t   %.2f   \t\n",ip[j].id,ip[j].name,ip[j].qty,ip[j].rate);
    }
}
void add_to_inventory_p(void){
int a;
    int n,m,x,j,y,k,flag=0,nw=0;
    float ry;float sum=0;
    printf("Do you want to add to a pre-existing medicine ?(1-Yes/2-No) ");
    scanf("%d",&a);
    if (a==1){
    printf("Enter the number Of medicine to be added :");
    scanf("%d",&m);
    while(m--)
    {
        printf("Enter the Medicine id: ");
        scanf("%d",&x);
        for(j=0;j<iidp;j++)
        {
            if(x==ip[j].id)
            {
                printf("Name: %s\n",ip[j].name);
                printf("Enter Quantity: ");
                scanf("%d",&y);
                ip[j].qty+=y;
                sum+=y*ip[j].rate;
                flag++;
                nw++;
                break;
            }
        }
    }
    }
    j=10;
    if (a==2){      
                 printf("Enter the number Of medicine to be added :");
                 scanf("%d",&m);
                 while(m--)
                {       
                        ip[j].id=++iidp;
                        printf("Enter Name : ");
                        scanf("%s",ip[j].name);
                        printf("Enter Quantity: ");
                        scanf("%d",&y);
                        ip[j].qty=y;
                        printf("Enter Rate: ");
                        scanf("%f",&ry);
                        ip[j].rate=ry;
                        printf("Enter MFG Date(dd-mm-yyy) :   ");
                        scanf("%s",ip[j].mfg);
                        printf("Enter EXP Date(dd-mm-yyy) :   ");
                        scanf("%s",ip[j].exp);
                        sum+=y*ry;
                        flag++;
                        j++;
                    }
                 }
           
printf("\nInventory Updated!!\\");
}
void place_an_order_p(void){
int ch,ch1,n,j=0,x,r,m,flag=0,w,del,temp,temp2;
        float amt=0,amt1=0;
        char st[30];
        do{
            printf("--------------------------------------\n");   
            printf("|           1.Add to cart            |\n");
            printf("|           2.Show Cart              |\n");
            printf("|           3.Delete From Cart       |\n");
            printf("|           4.CheckOut               |\n");
            printf("|           5.Exit                   |\n");
            printf("--------------------------------------\n\n");
            printf("Enter Choice: ");
            scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:x=0;
                       printf("\nEnter the Medicine ID: ");
                       scanf("%d",&n);
                       for(j=0;j<100;j++)
                       {
                           if(ip[j].id==n)
                           {
                               printf("Medicine Name :%s\n",ip[j].name);
                               printf("Medicine rate :%.2f\n",ip[j].rate);
                               printf("Enter The Quantity to be purchased: ");
                               scanf("%d",&x);
                               ip[j].qty=ip[j].qty-x;
                               if (ip[j].qty==1 ) {printf("\n!!!!  PLEASE RESTOCK, running low !!!!\n");}
                               if (ip[j].qty ==0) {printf("\n!!!!  THIS MEDICINE IS NOW OUT OF STOCK    !!!!\n");}
                               r=ip[j].rate;
                               strcpy(st,ip[j].name);
                               add_cart_p(cartidp,n,st,r,x);
                               cartidp++;
                               break;
                            }
                       }break;
                case 2:
                       printf("\nYour Cart\n");
                       printf("Cart id\tMedicine Id\tName\tQuantity\tRate\tamount\n ");
                       for(j=0;j<cartidp;j++)
                       {
                           amt1=(cartp[j].qty*cartp[j].rate);
                           printf("     %d\t   %d\t     %s\t    %d\t    %.2f\t    %.2f \n",cartp[j].id,cartp[j].medid,cartp[j].name,cartp[j].qty,cartp[j].rate,amt1);
                           amt+=amt+(cartp[j].qty*cartp[j].rate);

                       }
                       break;
                case 3:
                       printf("\n Delete From Cart:");
                       show_cart_p();
                       printf("\nPlease Enter an cartidp from cart to Delete:  " );
                       scanf("%d",&del);
                      for(j=0;j<=cartidp;j++)
                       {
                           if(del==j)
                           {
                               temp2=del+1;
                               temp=del;
                               for(;temp<=cartidp;temp++)
                               {
                               cartp[temp2].id=cartp[temp].id;
                               cartp[temp].medid=cartp[temp2].medid;
                               strcpy(cartp[temp].name,cartp[temp2].name);
                               cartp[temp].qty=cartp[temp2].qty;
                               cartp[temp].rate=cartp[temp2].rate;
                               temp2++;
                               }
                           }
                       }
                       cartidp--;
                       break;
                case 4:
                       amt+=(amt*18)/100;
                       printf("The Total Amount = %.2f\n",amt);
                       break;
                case 5: exit(0);
                   break;
            }
        }while(ch1<6);
}
void add_cart_p(int y,int n,char st[30],float r,int x){
    cartp[y].id=y;;
    cartp[y].medid=n;
    strcpy(cartp[y].name,st);
    cartp[y].rate=r;
    cartp[y].qty=x;
}
void show_cart_p(void){
    int j;float amt1;
    printf("\nYour Cart\n");
    printf("cartidp\tMedicine Id\tName\tQuantity\tRate\tamount\n ");
    for(j=0;j<cartidp;j++)
    {
        amt1=(cartp[j].qty*cartp[j].rate);
        printf("     %d\t   %d\t     %s \t    %d\t    %.2f\t    %.2f \n",cartp[j].id,cartp[j].medid,cartp[j].name,cartp[j].qty,cartp[j].rate,amt1);
    }
}