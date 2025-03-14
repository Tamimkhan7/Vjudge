class Solution
{
public:
    typedef long long ll;
    ll countOfSubstrings(string word, int k)
    {
        int n = word.length();
        int vow[5] = {0};
        ll ans = 0, pre_vow = 0;
        int cons = 0, i = 0, j = 0;

        while (j < n)
        {

            if (word[j] == 'a')
                vow[0]++;
            else if (word[j] == 'e')
                vow[1]++;
            else if (word[j] == 'i')
                vow[2]++;
            else if (word[j] == 'o')
                vow[3]++;
            else if (word[j] == 'u')
                vow[4]++;
            else
                cons++;

            while (cons > k)
            {
                pre_vow = 0;
                if (word[i] == 'a')
                    vow[0]--;
                else if (word[i] == 'e')
                    vow[1]--;
                else if (word[i] == 'i')
                    vow[2]--;
                else if (word[i] == 'o')
                    vow[3]--;
                else if (word[i] == 'u')
                    vow[4]--;
                else
                    cons--;
                i++;
            }

            if (cons == k)
            {
                bool ok = (vow[0] > 0 and vow[1] > 0 and vow[2] > 0 and vow[3] > 0 and vow[4] > 0);

                if (ok)
                {
                    while (cons == k and i <= j)
                    {
                        if (word[i] == 'a' and vow[0] > 1)
                            vow[0]--;
                        else if (word[i] == 'e' and vow[1] > 1)
                            vow[1]--;
                        else if (word[i] == 'i' and vow[2] > 1)
                            vow[2]--;
                        else if (word[i] == 'o' and vow[3] > 1)
                            vow[3]--;
                        else if (word[i] == 'u' and vow[4] > 1)
                            vow[4]--;
                        else
                            break;
                        i++;
                        pre_vow++;
                    }
                    ans += pre_vow + 1;
                }
            }
            j++;
        }
        return ans;
    }
};
