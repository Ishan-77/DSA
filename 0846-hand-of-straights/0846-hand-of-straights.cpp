class Solution
{
public:
  bool isNStraightHand(vector<int> &hand, int groupSize)
  {
    int n = hand.size();
    if (n % groupSize != 0)
    {
      return false;
    }

    map<int, int> freq;
    for (const auto &num : hand)
    {
      ++freq[num];
    }

    while (freq.size() != 0)
    {
      int curr = freq.begin()->first;
      for (int i = 0; i < groupSize; ++i)
      {
        if (freq.find(curr + i) == freq.end())
        {
          return false;
        }
        --freq[curr + i];
        if (freq[curr + i] == 0)
        {
          freq.erase(curr + i);
        }
      }
    }
    return true;
  }
};