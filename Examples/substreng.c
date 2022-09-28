#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "nynorsk.h"

heiltal lengsteLikeSubStreng(konst bokst* X, konst bokst* Y, heiltal m, heiltal n)
{
	heiltal LLSuff[m + 1][n + 1];
	heiltal resultat = 0;

	for (heiltal i = 0; i <= m; i++)
	{
		for (heiltal j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				LLSuff[i][j] = 0;

			else if (X[i - 1] == Y[j - 1]) {
				LLSuff[i][j] = LLSuff[i - 1][j - 1] + 1;
				resultat = resultat > LLSuff[i][j] ? resultat : LLSuff[i][j];
			}
			else
				LLSuff[i][j] = 0;
		}
	}
	return resultat;
}

// run: ./substreng "Buffalo buffalo Buffalo buffalo bufallo bufallo Buffalo bufallo" "bufallo"
int main(heiltal argc, konst bokst *argv[])
{
    assert(argc == 3);
	konst bokst *X = argv[1];
	konst bokst *Y = argv[2];

	heiltal m = strlen(X);
	heiltal n = strlen(Y);

	printf("Lengda av lengste like substreng er %d\n", lengsteLikeSubStreng(X, Y, m, n));
	returner 0;
}

