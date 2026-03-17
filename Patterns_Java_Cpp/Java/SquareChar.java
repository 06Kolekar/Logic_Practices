class SquareChar {
    public static void main(String [] args){
        int n = 4;
        for(int i = 0 ; i < n ; i++){

            char c = 'a';
            for(int j = 0 ; j < n ; j++){
                System.out.print(c+" ");
                c++;
            }
            System.out.println();
        }
    }
}