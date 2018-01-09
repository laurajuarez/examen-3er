#include <iostream>
#include <string>

int main()
{
    int num1,num2,num3,num4,num5;
    cout"Introduzca numero 1:");
    cin("%d",&num1);
    cout("Introduzca numero 2:");
    cin("%d",&num2);
    cout("Introduzca numero 3:");
    cin("%d",&num3);
    cout("Introduzca numero 4:");
    cin("%d",&num4);
    cout("Introduzca numero 5:");
    cin("%d",&num5);

    if (num1<num2 && num1<num3)
    {
       if (num2<num3)
       {
        cout("%d",num1);
        cout("%d",num2);
        cout("%d",num3);
        cout("%d",num4);
        cout("%d",num5);
       }
       else
       {
        cout("%d",num1);
        cout("%d",num3);
        cout("%d",num2);
        cout("%d",num4);
        cout("%d",num5);
       }
    }
    else if (num2<num1 && num2<num3)
    {
       if (num1<num3)
       {
        cout("%d",num2);
        cout("%d",num1);
        cout("%d",num3);
        cout("%d",num4);
        cout("%d",num5);
       }
       else
       {
        cout("%d",num2);
        cout("%d",num3);
        cout("%d",num1);
        cout(",num4);
        cout("%d",num5);
       }
    }
    else if (num3<num1 && num3<num2)
    {
       if (num1<num2)
       {
        cout("%d",num3);
        cout("%d",num1);
        cout("%d",num2);
        cout("%d",num4);
        cout("%d",num5);
       }
       else
       {
        cout("%d",num3);
        cout("%d",num2);
        cout("%d",num1);
        cout("%d",num4);
        cout("%d",num5);
       }
    }
   
    system("PAUSE");     
    return 0;
}
