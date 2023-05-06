import algorea.Scanner;
class Main{
   static int R,N;
   static int tab[];
   public static void main(String [] args){
      Scanner input=new Scanner(System.in);
      R=input.nextInt();
      N=input.nextInt();
      tab=new int[R];
      for(int i =0;i<R;i++){
         tab[i]=i;
      }
      for(int i=0;i<N;i++){
         int x,y;
         x=input.nextInt();
         y=input.nextInt();
         int a = find(x),b=find(y);
         if(a!=b){
            System.out.print(x+" "+y+"\n");
            tab[a]=b;
         }
      }
   }
   static int find(int x){
      while(tab[x]!=x)   x=tab[x];
      return x;
   }
}
