/* Generated by Frama-C */
int abs(int x)
{
  int tmp;
  if (x < 0) 
    /*@ assert rte: signed_overflow: -2147483647 ≤ x; */
    tmp = - x;
  else tmp = x;
  return tmp;
}


