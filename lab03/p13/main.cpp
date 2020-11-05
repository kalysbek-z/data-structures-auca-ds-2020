#include <bits/stdc++.h>

using namespace std;

void moveQueen(int &king, int &queen, int &queenMove);

int main()
{
    int king, queen, queenMove;

    while (cin >> king >> queen >> queenMove)
    {
        moveQueen(king, queen, queenMove);
    }
}

bool checkState(int &king, int &queen)
{
    return (king != queen) ? true : false;
}

bool checkMove(int &king, int &queen, int &queenMove)
{
    if ((queenMove - queen) % 8 != 0 && (queenMove / 8 != queen / 8) || queen == queenMove)
    {
        return false;
    }
    else if (((king - queen) % 8 == 0 && (king - queenMove) % 8 == 0) ||
             (king / 8 == queen / 8 && king / 8 == queenMove / 8))
    {
        if (king <= max(queen, queenMove) && king >= min(queen, queenMove))
        {
            return false;
        }
    }
    return true;
}

bool allowedMove(int &king, int &queen, int &queenMove)
{
    if ((max(king, queenMove) - min(king, queenMove) == 8) ||
        (max(king, queenMove) - min(king, queenMove)) == 1 && king / 8 == queenMove / 8)
    {
        return false;
    }
    return true;
}

bool isStop(int &king, int &queenMove)
{
    if ((king == 0 && queenMove == 9) || (king == 7 && queenMove == 14) ||
        (king == 56 && queenMove == 49) || (king == 63 && queenMove == 54))
    {
        return true;
    }
    return false;
}

void moveQueen(int &king, int &queen, int &queenMove)
{
    string result;
    if (!checkState(king, queen))
    {
        result = "Illegal state";
    }
    else if (!checkMove(king, queen, queenMove))
    {
        result = "Illegal move";
    }
    else if (!allowedMove(king, queen, queenMove))
    {
        result = "Move not allowed";
    }
    else if (isStop(king, queenMove))
    {
        result = "Stop";
    }
    else
    {
        result = "Continue";
    }

    cout << result << endl;
}