
public class Stock {
    public static int stockProfit(int arr[]){
    int n=arr.length;
    int profit=0;
    int buyprice=arr[0];
    int maxProfit=0;
    for(int i=1;i<n;i++){
     if(buyprice<arr[i]){
        profit=arr[i]-buyprice;
        maxProfit=Math.max(profit,maxProfit);
     }
     else{
        buyprice=arr[i];
     }
    }
    return maxProfit;
    }
public static void main(String []args){
    int arr[]={7, 1, 5, 3, 6, 4};
    int ans=stockProfit(arr);
    System.out.println(ans);
}    
}
