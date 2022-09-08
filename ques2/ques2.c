    #include<stdio.h>
    main()
    {
    int a[10],i,temp=0,j;
    printf("Enter the array elements\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array elements are\n");
    for(i=0;i<7;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Sorted array is\n");
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
        if(a[i]>a[j])
        {
            temp =  a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        }
    } 
    } 