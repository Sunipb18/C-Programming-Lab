 #include<stdio.h> 
 void main()
 {
      int cost_price,sell_price,result;
      printf("Enter cost price : \n");
      scanf("%d",&cost_price);
      printf("Enter selling price : \n");
      scanf("%d",&sell_price);
      result = sell_price - cost_price;
      if(result > 0){
        printf("Profit : %d\n",result);
      }else{
        printf("Loss : %d\n",-result);
      }
 }
