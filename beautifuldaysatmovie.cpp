
int reverse(int i){
    int sum=0,p;
    while(i){
        p=i%10;
        sum=sum*10+p;
        i/=10;
    }return sum;
}

int beautifulDays(int i, int j, int k) {
    int days=0;
    for(i=i;i<=j;i++){
        int res=reverse(i);
        if((i-res)%k==0){
            days++;
        }
    }
    return days;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int i = stoi(first_multiple_input[0]);

    int j = stoi(first_multiple_input[1]);

    int k = stoi(first_multiple_input[2]);

    int result = beautifulDays(i, j, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

Input (stdin)
13 45 3
Expected Output
33
