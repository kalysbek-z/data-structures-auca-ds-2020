#include <bits/stdc++.h>

using namespace std;

struct Submission
{
    int player;
    int prob_solved;
    int time;
    bool participating;

    Submission(int p, bool part)
        : player(p), participating(part), prob_solved(0), time(0)
    {
    }
};

struct CmpTeamByNumber
{
    bool operator()(const Submission &t1, const Submission &t2) { return t1.player < t2.player; }
};

struct CmpTeamByACMRules
{
    bool operator()(const Submission &t1, const Submission &t2)
    {
        if (t1.prob_solved != t2.prob_solved)
        {
            return t1.prob_solved > t2.prob_solved;
        }
        if (t1.time != t2.time)
        {
            return t1.time < t2.time;
        }
        return t1.player < t2.player;
    }
};

int main()
{
    int n;
    cin >> n;

    int con, p, t;
    char l;

    string s;

    getline(cin, s);
    getline(cin, s);

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            cout << "\n";
        }

        vector<Submission> teams;
        vector<pair<int, char>> submissions[101][10];

        //

        for (int i = 0; i < 101; i++)
        {
            teams.emplace_back(i, false);
        }

        while (getline(cin, s) && !s.empty())
        {
            istringstream str(s);
            pair<char, int> sub;

            str >> con >> p >> t >> l;

            sub.first = t;
            sub.second = l;

            if (l == 'C' || l == 'I')
            {
                submissions[con][p].push_back(sub);
            }
            teams[con].participating = true;
        }

        for (int i = 0; i < teams.size(); i++)
        {
            for (int j = 1; j < 10; j++)
            {
                vector<pair<int, char>> subm = submissions[i][j];
                int penTime = 0;

                for (int k = 0; k < subm.size(); k++)
                {
                    if (subm[k].second == 'I')
                    {
                        penTime += 20;
                    }
                    else if (subm[k].second == 'C')
                    {
                        penTime += subm[k].first;
                        teams[i].prob_solved++;
                        teams[i].time += penTime;
                        break;
                    }
                }
            }
        }

        sort(teams.begin(), teams.end(), CmpTeamByACMRules());

        for (int i = 0; i < teams.size(); i++)
        {
            if (teams[i].participating)
            {
                printf("%d %d %d\n", teams[i].player, teams[i].prob_solved, teams[i].time);
            }
        }
    }
}