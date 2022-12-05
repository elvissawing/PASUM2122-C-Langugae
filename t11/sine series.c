    #include<stdio.h>
    #include<math.h>

    double factorial(int);
    void   calc(float, float*);

    int main()
    {
        float x;
        float result = 0;

        printf("Enter value of x in radian\n");
        scanf("%f", &x);

        calc(x, &result);

        printf("Sin(%f) = %f\n", x, result);

        return 0;
    }

    void calc(float num, float *res)
    {
        int count, n = 1, sign = 1;

        for(count = 1; (n <= 10); count += 2)
        {
           *res  +=  sign * ( pow(num, count) / factorial(count) );
            n    +=  1;
            sign *= -1;
        }
    }

    double factorial(int num)
    {
        int    count;
        double sum = 1;

        for(count = 1; count <= num; count++)
        {
            sum *= count;
        }
        return(sum);
    }





