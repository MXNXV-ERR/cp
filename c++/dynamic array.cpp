int lastAnswer=0;
  vector<vector<int>> darr(n);
  vector<int> ans;
  for(int i=0;i<queries.size();i++)
  {
    int t;
    if (queries[i][0]== 1)
    {
      t=((queries[i][1]^lastAnswer)%n);
      darr[t].push_back(queries[i][2]);      
    }
    else
    {
      t=((queries[i][1]^lastAnswer)%n);
      lastAnswer=darr[t][queries[i][2]%darr[t].size()];
      ans.push_back(lastAnswer);
    }
    
  }
  return ans;
