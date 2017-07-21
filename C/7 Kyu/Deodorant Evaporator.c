int evaporator(double content, double evap, double threshold)
{
    unsigned short n = 0;
    for(float lost = content * (threshold/100); content > lost; n++)
      content -= content * (evap/100);
    return n;
}
