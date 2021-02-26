#include "StackType.cpp"
#include "string"
bool IsAnOperand(char arr)
{
    if(arr>='0' & arr<='9')
        return true;
    else
        return false;
}

bool IsAnOperator(char arr)
{
    if(arr=='+' | arr=='-' | arr=='*' | arr=='/')
        return true;
    else
        return false;
}
double Evaluate(double a,double b,char c)
{
    if(c=='+')
        return (double)a+b;

    else if(c=='-')
        return (double)a-b;

    else if(c=='*')
        return ((double)a*b);

    else
        return ((double)a/b);
}

bool HasAHigherPrecedence(char a,char b)
{
    if((a=='*' | a=='/') & (b=='-' | b=='+'))
        return true;
    else if((a=='-' | a=='+') & (b=='*' | b=='/'))
        return false;

}


bool IsAnOpeningParantheses(char a)
{
    return (a=='(');
}

bool IsAClosingParantheses(char a)
{
    return (a==')');
}

bool isbalanced(string s)
{
    StackType<char>obj;

    for(int i=0; s[i]!='\0'; i++)
    {

        if(s[i]=='(')
            obj.Push(s[i]);
        else if (s[i]==')')
            if(obj.IsEmpty())
                return false;
            else obj.Pop();

    }

    if(obj.IsEmpty())
        return true;
    else return false;
}


bool IsValidExpression(string a)
{
    int flag=0;
    if(isbalanced(a))
        if(!IsAnOperator(a[0]))
            for(int i=0;a[i]!='\0';i++)
            {
                if(IsAnOperator(a[i]))
                {
                    if(flag>0)
                        return false;
                    flag++;
                }
                else flag=0;
            }
        else return false;

    else return false;
    return true;

}

int main()
{
    //INFIX to POSTFIX
    string Infix;
    cin>>Infix;
    string PostFix;
    StackType<char>obj;

    if(IsValidExpression(Infix))
    {
        for(int i=0;i<Infix.length();i++)
    {
        if(IsAnOperand(Infix[i]))
            PostFix = PostFix + Infix[i];
        else if(IsAnOperator(Infix[i]))
        {
            if(!obj.IsEmpty() && !IsAnOpeningParantheses(Infix[i]) && HasAHigherPrecedence(obj.Top(),Infix[i]))
                while(!obj.IsEmpty())
                {
                    PostFix=PostFix+obj.Top();
                    obj.Pop();
                }
            obj.Push(Infix[i]);
        }
        else if(IsAnOpeningParantheses(Infix[i]))
        {
            obj.Push(Infix[i]);
        }
        else if(IsAClosingParantheses(Infix[i]))
        {
            while(!obj.IsEmpty() && !IsAnOpeningParantheses(obj.Top()))
            {
                PostFix=PostFix+obj.Top();
                obj.Pop();
            }
            obj.Pop();
        }
    }
    while(!obj.IsEmpty())
    {
        PostFix=PostFix+obj.Top();
        obj.Pop();
    }

    //cout<<"PostFix: "<<PostFix<<endl;


    //Evaluation of POSTFIX
    StackType<double>FINALE;
    for(int i=0;PostFix[i]!='\0';i++)
    {
        if(IsAnOperand(PostFix[i]))
            {
                int convertToInt=PostFix[i]-'0';
                FINALE.Push(convertToInt);
            }
        else if(IsAnOperator(PostFix[i]))
            {
                double a,b; char c=PostFix[i];
                b=FINALE.Top(); FINALE.Pop();
                a=FINALE.Top(); FINALE.Pop();
                double answer = Evaluate(a,b,c);
                FINALE.Push(answer);
            }
    }

    cout<<FINALE.Top();
    }

    else cout<<"Invalid Expression\n";




    return 0;
}


/* */
