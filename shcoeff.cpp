﻿/*
** Spherical Harmonic coefficients
*/
#include "shcoeff.h"

// from http://www.3dshaders.com/shaders2ndEd/CH12-shLight.vert.txt
const float shcoeff[][9][3] =
{
  // Constants for Old Town Square lighting
  {
    {  0.871297f,  0.875222f,  0.864470f },
    {  0.175058f,  0.245335f,  0.312891f },
    {  0.034675f,  0.036107f,  0.037362f },
    { -0.004629f, -0.029448f, -0.048028f },
    { -0.120535f, -0.121160f, -0.117507f },
    {  0.003242f,  0.003624f,  0.007511f },
    { -0.028667f, -0.024926f, -0.020998f },
    { -0.077539f, -0.086325f, -0.091591f },
    { -0.161784f, -0.191783f, -0.219152f },
  },

  // Constants for Grace Cathedral lighting
  {
    {  0.78908f,  0.43710f,  0.54161f },
    {  0.39499f,  0.34989f,  0.60488f },
    { -0.33974f, -0.18236f, -0.26940f },
    { -0.29213f, -0.05562f,  0.00944f },
    { -0.11141f, -0.05090f, -0.12231f },
    { -0.26240f, -0.22401f, -0.47479f },
    { -0.15570f, -0.09471f, -0.14733f },
    {  0.56014f,  0.21444f,  0.13915f },
    {  0.21205f, -0.05432f, -0.30374f },
  },

  // Constants for Eucalyptus Grove lighting
  {
    {  0.3783264f,  0.4260425f,  0.4504587f },
    {  0.2887813f,  0.3586803f,  0.4147053f },
    {  0.0379030f,  0.0295216f,  0.0098567f },
    { -0.1033028f, -0.1031690f, -0.0884924f },
    { -0.0621750f, -0.0554432f, -0.0396779f },
    {  0.0077820f, -0.0148312f, -0.0471301f },
    { -0.0935561f, -0.1254260f, -0.1525629f },
    { -0.0572703f, -0.0502192f, -0.0363410f },
    {  0.0203348f, -0.0044201f, -0.0452180f },
  },

  // Constants for St. Peter's Basilica lighting
  {
    {  0.3623915f,  0.2624130f,  0.2326261f },
    {  0.1759130f,  0.1436267f,  0.1260569f },
    { -0.0247311f, -0.0101253f, -0.0010745f },
    {  0.0346500f,  0.0223184f,  0.0101350f },
    {  0.0198140f,  0.0144073f,  0.0043987f },
    { -0.0469596f, -0.0254485f, -0.0117786f },
    { -0.0898667f, -0.0760911f, -0.0740964f },
    {  0.0050194f,  0.0038841f,  0.0001374f },
    { -0.0818750f, -0.0321501f,  0.0033399f },
  },

  // Constants for Uffizi Gallery lighting
  {
    {   0.3168843f,  0.3073441f,  0.3495361f },
    {   0.3711289f,  0.3682168f,  0.4292092f },
    {  -0.0034406f, -0.0031891f, -0.0039797f },
    {  -0.0084237f, -0.0087049f, -0.0116718f },
    {  -0.0190313f, -0.0192164f, -0.0250836f },
    {  -0.0110002f, -0.0102972f, -0.0119522f },
    {  -0.2787319f, -0.2752035f, -0.3184335f },
    {   0.0011448f,  0.0009613f,  0.0008975f },
    {  -0.2419374f, -0.2410955f, -0.2842899f },
  },

  // Constants for Galileo's tomb lighting
  {
    {  1.0351604f,  0.7603549f,  0.7074635f },
    {  0.4442150f,  0.3430402f,  0.3403777f },
    { -0.2247797f, -0.1828517f, -0.1705181f },
    {  0.7110400f,  0.5423169f,  0.5587956f },
    {  0.6430452f,  0.4971454f,  0.5156357f },
    { -0.1150112f, -0.0936603f, -0.0839287f },
    { -0.3742487f, -0.2755962f, -0.2875017f },
    { -0.1694954f, -0.1343096f, -0.1335315f },
    {  0.5515260f,  0.4222179f,  0.4162488f },
  },

  // Constants for Vine Street kitchen lighting
  {
    {  0.6396604f,  0.6740969f,  0.7286833f },
    {  0.2828940f,  0.3159227f,  0.3313502f },
    {  0.4200835f,  0.5994586f,  0.7748295f },
    { -0.0474917f, -0.0372616f, -0.0199377f },
    { -0.0984616f, -0.0765437f, -0.0509038f },
    {  0.2496256f,  0.3935312f,  0.5333141f },
    {  0.3813504f,  0.5424832f,  0.7141644f },
    {  0.0583734f,  0.0066377f, -0.0234326f },
    { -0.0325933f, -0.0239167f, -0.0330796f },
  },

  // Constants for Breezeway lighting
  {
    {  0.3175995f,  0.3571678f,  0.3784286f },
    {  0.3655063f,  0.4121290f,  0.4490332f },
    { -0.0071628f, -0.0123780f, -0.0146215f },
    { -0.1047419f, -0.1183074f, -0.1260049f },
    { -0.1304345f, -0.1507366f, -0.1702497f },
    { -0.0098978f, -0.0155750f, -0.0178279f },
    { -0.0704158f, -0.0762753f, -0.0865235f },
    {  0.0242531f,  0.0279176f,  0.0335200f },
    { -0.2858534f, -0.3235718f, -0.3586478f },
  },

  // Constants for Campus Sunset lighting
  {
    {  0.7870665f,  0.9379944f,  0.9799986f },
    {  0.4376419f,  0.5579443f,  0.7024107f },
    { -0.1020717f, -0.1824865f, -0.2749662f },
    {  0.4543814f,  0.3750162f,  0.1968642f },
    {  0.1841687f,  0.1396696f,  0.0491580f },
    { -0.1417495f, -0.2186370f, -0.3132702f },
    { -0.3890121f, -0.4033574f, -0.3639718f },
    {  0.0872238f,  0.0744587f,  0.0353051f },
    {  0.6662600f,  0.6706794f,  0.5246173f },
  },

  // Constants for Funston Beach Sunset lighting
  {
    {  0.6841148f,  0.6929004f,  0.7069543f },
    {  0.3173355f,  0.3694407f,  0.4406839f },
    { -0.1747193f, -0.1737154f, -0.1657420f },
    { -0.4496467f, -0.4155184f, -0.3416573f },
    { -0.1690202f, -0.1703022f, -0.1525870f },
    { -0.0837808f, -0.0940454f, -0.1027518f },
    { -0.0319670f, -0.0214051f, -0.0147691f },
    {  0.1641816f,  0.1377558f,  0.1010403f },
    {  0.3697189f,  0.3097930f,  0.2029923f },
  },
};

const int nshcoeff = sizeof shcoeff / sizeof shcoeff[0];
