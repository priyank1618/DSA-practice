//string ma substring and subsequence 


//dharo k string is geeks

//substrings are  n*(n+1)/2 --->n=5 -->15 nikde
// 5-------------g, ge, gee, geek, geeks,
// 4-----------e, ee, eek, eeks,
// 3--------e, ek, eks,
// 2---------k, ks, 
//1-------- s


//subsequences---> (2^n)-1--> n=5 hoy to --->31

// for n=1 mate permutation nc1+nc2+nc3+nc4+nc5
//1 vada 5-------- g, e, e, k, s,
//2 vada 10------- ge, ge, gk, gs, ee, ek, es, ek, es, ks,
//3 vada 10--------- gee, gek, ges, gek, ges, gks, eek, ees, eks, eks,
//4 vada 5-------- geek, gees,geks,geks,eeks
//5 vada 1------- geeks