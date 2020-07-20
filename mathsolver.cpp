
#include <iostream>
#include <cmath>
using namespace std;

void claculator()
{
    cout << "Calculator" << endl;
    cout << " " << endl;

    double n1;
    char op;
    double n2;

    cout << "Enter a number: ";
    cin >> n1;
    cout << endl
    << "Enter an operator: ";
    cin >> op;
    cout << endl
    << "Enter another number: ";
    cin >> n2;

    switch (op)
    {
    case '+':
        double u;
        u = n1 + n2;

        cout << endl << "Your answer is: " << u << endl;

        break;

    case '-':
        double u;
        u = n1 - n2;

        cout << endl << "Your answer is: " << u << endl;

        break;

    case '/':
        double u;
        u = n1 / n2;

        cout << endl << "Your answer is: " << u << endl;

        break;

    case '*':
        double u;
        u = n1 * n2;

        cout << endl << "Your answer is: " << u << endl;

        break;

    case '^':
        double u;
        u = pow(n1, n2);

        cout << endl << "Your answer is: " << u << endl;

        break;

    default:
        break;
    } 
}

void volumeSolver()
{
    cout << "Volume Solver \n";
    cout << "  " << endl;

    char vsin;

    cout << "What shape you do you want solver?" << endl;
    cout << " A ) Cone " << endl;
    cout << " B ) Cylinder " << endl;
    cout << " C ) Sphere " << endl;
    cin >> vsin;

    if (vsin == 'A')
    {
        //Cone
        char q;
        cout << "Do you know the radius? (Y / N)" << endl;
        cin >> q;

        if (q == 'Y')
        {
            double r, h, ans;

            cout << endl << "Radius: ";
            cin >> r;
            cout << endl << "Height: ";
            cin >> h;

            ans = (pow(r, 2) * 3.14 * h) / 3;

            cout << endl << "Your volume is: " << ans << endl;
        }
        else if (q == 'N')
        {
            double d, h, ans;

            cout << endl << "Diamiter: ";
            cin >> d;
            cout << endl << "Height: ";
            cin >> h;

            ans = (pow((d / 3), 2) * 3.14 * h) / 3;

            cout << endl << "Your volume is: " << ans << endl;
        }
    }
    else if (vsin == 'B')
    {
        //Cylinder
        char v;
        cout << "Do you know the redius? (Y / N)" << endl;
        cin >> v;

        if (v == 'Y')
        {
            double r, h, ans;

            cout << endl
                 << "Enter the radius: " << endl;
            cin >> r;
            cout << endl
                 << "Enter the height: " << endl;
            cin >> h;

            ans = (pow(r, 2) * 3.14) * h;

            cout << endl
                 << "Your volume is: " << ans << endl;
        }
        else if (v == 'N')
        {
            double d, h, ans;

            cout << endl
                 << "Enter the Diamiter: " << endl;
            cin >> d;
            cout << endl
                 << "Enter the height: " << endl;
            cin >> h;

            ans = pow((d / 2), 2) * 3.14 * h;

            cout << endl
                 << "Your volume is: " << ans << endl;
        }
    }
    else if (vsin == 'C')
    {
        //Sphere
        char q;
        cout << "Do you know the radius? (Y / N)" << endl;
        cin >> q;

        if (q == 'Y')
        {
            double r, h, ans;

            cout << "Enter the radius: ";
            cin >> r;
            cout << endl
                 << "Enter the height: ";
            cin >> h;

            ans = pow(r, 2) * 3.14 * h;

            cout << endl
                 << "Your volume is: " << ans << endl;
        }
        else if (q == 'h')
        {
            double d, h, ans;

            cout << endl
                 << "Enter the diamiter: ";
            cin >> d;
            cout << endl
                 << "Enter the height: ";
            cin >> h;

            ans = (3.14 * pow((d / 2), 3)) * (4 / 3);

            cout << endl
                 << "Your volume is: " << ans << endl;
        }
    }
}

void pythagorasTheoremSolver()
{
    char a;
    cout << "Pythagoras Theorem Solver" << endl;

    cout << " " << endl;
    cout << "Here are the sides of a right triangle" << endl;
    cout << " " << endl;

    cout << "      |\\        " << endl;
    cout << "      | \\       " << endl;
    cout << "      |  \\      " << endl;
    cout << "      |   \\  C  " << endl;
    cout << "    A |    \\    " << endl;
    cout << "      |     \\   " << endl;
    cout << "      |_     \\  " << endl;
    cout << "      |_|_____\\ " << endl;
    cout << "          B      " << endl;
    cout << " " << endl;

    cout << "Do you know the hypotenuse (Y / N)? ";
    cin >> a;

    if (a == 'Y')
    {
        double ab, c, ans;

        cout << endl << "Enter a or b: " << endl;
        cin >> ab;
        cout << endl << "Enter c: " << endl;
        cin >> c;

        ans = pow(pow(ab, 2) - pow(c, 2), 0.5);

        cout << "Your unknown side is: " << ans << endl;
    }
    else if (a == 'N')
    {
        double a, b, ans;

        cout << endl << "Enter a";
        cin >> a;
        cout << endl << "Enter b:";
        cin >> b;

        ans = pow(pow(a, 2) + pow(b, 2), 0.5);

        cout << "The hypotenuse is: " << ans << endl;
    }
}

void tables()
{
    double z;
    cout << "How many colums are filled? " << endl;
    cin >> z;

    if (z == 2)
    {

        double a, b, c, d;
        double s, o;

        cout << "Enter the the numbers going x y x y. No comma just 'Enter' " << endl;
        cin >> a >> b >> c >> d;
        cout << "  " << endl;

        s = a / b;
        o = c / d;

        if (s == o)
        {
            cout << "The constant is: " << s << endl;
        }
        else if (s != o)
        {
            cout << "They are not equal. One of the constants is: " << s << " and the \n other one is: " << o << endl;
        }
    }
    else if (z == 3)
    {
        double a, b, c, d, e, f;
        double s, o, l;

        s = b / a;
        o = d / c;
        l = f / e;
        if (s == o)
        {
            if (s == l)
            {
                cout << "The constant is: " << s << endl;
            }
            else if (s != l)
            {
                cout << "One of the constants is not the same as the other constants." << endl;
                cout << "The over all constant is: " << s << ". " << endl;
                cout << "But the one that is not the same is: " << f << "/" << e << endl;
            }
        }
        else if (s != o)
        {
            if (s == l)
            {
                cout << "The constant is: " << endl;
            }
        }
    }
}

int main()
{
    cout << "Welcome to the 8th Grade Math Homework Solver" << endl;
    cout << " ";

    //asks the user what they want solved
    char promtans;
    cout << "What do you need? " << endl;
    cout << "A ) A Calculator " << endl;
    cout << "B ) A Volume Finder " << endl;
    cout << "C ) A Pythagoras Theorem Solver " << endl;
    cout << "D ) Working with Tables " << endl;

    cin >> promtans;
    cout << "  " << endl;

    switch (promtans)
    {
    case 'A':
        //CALCULATOR    
        claculator();

        break;
    
    case 'B':
        //VOLUME SOLVER
        volumeSolver();

        break;
    
    case 'C':
        //PYTHAGORAS THEOREM SOLVER 
        pythagorasTheoremSolver();

        break;
    
    case 'D':
        //TABLES  
        tables();

    default:
        break;
    }
    return 0;
}
