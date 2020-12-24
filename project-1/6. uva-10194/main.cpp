#include <bits/stdc++.h>

using namespace std;

struct Team
{
    /* data */
    string name;
    int points;
    int games;
    int wins;
    int ties;
    int loses;
    int goals;
    int goals_against;

    Team(string n)
    {
        name = n;
        points = games = wins = ties = loses = goals = goals_against = 0;
    }
};

struct CmpByName
{
    /* data */
    bool operator()(Team t1, Team t2)
    {
        return t1.name < t2.name;
    }
};

struct CmpByResult
{
    /* data */
    bool operator()(Team t1, Team t2)
    {
        if (t1.points != t2.points)
            return t1.points > t2.points;
        if (t1.wins != t2.wins)
            return t1.wins > t2.wins;
        if (t1.goals - t1.goals_against != t2.goals - t2.goals_against)
            return t1.goals - t1.goals_against > t2.goals - t2.goals_against;
        if (t1.goals != t2.goals)
            return t1.goals > t2.goals;
        if (t1.wins + t1.ties + t1.loses != t2.wins + t2.ties + t2.loses)
            return t1.wins + t1.ties + t1.loses < t2.wins + t2.ties + t2.loses;

        string t1n = t1.name;
        string t2n = t2.name;

        transform(t1n.begin(), t1n.end(), t1n.begin(), ::tolower);
        transform(t2n.begin(), t2n.end(), t2n.begin(), ::tolower);
        return t1n < t2n;
    }
};

int main()
{
    int n;
    string str;
    cin >> n; //tournaments
    // vector<Team> teams;
    int c = 0;

    getline(cin, str);

    while (n--)
    {
        if (c++)
        {
            cout << "\n";
        }
        vector<Team> teams;

        string tn;
        getline(cin, tn);

        int teamN;
        getline(cin, str);
        teamN = stoi(str);

        string team_tmp;

        for (int i = 0; i < teamN; i++)
        {
            getline(cin, team_tmp);
            teams.emplace_back(team_tmp);
        }

        sort(teams.begin(), teams.end(), CmpByName());

        string t1, t2;
        int sc1, sc2;

        int g;
        getline(cin, str);
        g = stoi(str);

        for (int i = 0; i < g; i++)
        {
            getline(cin, t1, '#');
            cin >> sc1;
            cin.get();

            cin >> sc2;
            cin.get();
            getline(cin, t2);

            auto it1 = lower_bound(teams.begin(), teams.end(), t1, CmpByName());
            auto it2 = lower_bound(teams.begin(), teams.end(), t2, CmpByName());

            it1->goals += sc1;
            it1->goals_against += sc2;
            it2->goals += sc2;
            it2->goals_against += sc1;

            if (sc1 > sc2)
            {
                it1->wins++;
                it1->points += 3;

                it2->loses++;
            }
            else if (sc2 > sc1)
            {
                it1->loses++;

                it2->wins++;
                it2->points += 3;
            }
            else
            {
                it1->ties++;
                it1->points++;

                it2->ties++;
                it2->points++;
            }
        }

        sort(teams.begin(), teams.end(), CmpByResult());

        cout << tn << "\n";

        for (int i = 0; i < teamN; i++)
        {
            cout << i + 1 << ") " << teams[i].name;
            printf(" %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",
                   teams[i].points,
                   teams[i].wins + teams[i].ties + teams[i].loses,
                   teams[i].wins, teams[i].ties,
                   teams[i].loses,
                   teams[i].goals - teams[i].goals_against,
                   teams[i].goals,
                   teams[i].goals_against);
        }
    }
}