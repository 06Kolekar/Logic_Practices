class FlowCharSquare {
    public static void main(String [] args){
        int n =4;
        char c = 'A';//a

        for(int i = 0; i<n ;i++){
            for(int j = 0 ; j < n ; j++){
                System.out.print(c +" ");
                c++;
            }
            System.out.println();
        }
    }
}