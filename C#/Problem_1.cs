using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_1
{
    class Problem_1
    {
        static int getMultiples(int multiplesOf, int countMultiples, int number)
        {
            while (multiplesOf < 1000)
            {
                countMultiples += multiplesOf;
                multiplesOf += number;
            }
            return countMultiples;
        }
        static void Main(string[] args)
        {
            int fivess = 0;
            fivess = getMultiples(5, fivess, 5);
            int threess = 0;
            threess = getMultiples(3, threess, 3);
            int fifteenss = 0;
            fifteenss = getMultiples(15, fifteenss, 15);
            Console.WriteLine(threess + fivess - fifteenss);
            Console.Write("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
