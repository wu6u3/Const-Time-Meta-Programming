#include<iostream>

#include"ctt_timer.hpp"
#include"ctt_main.hpp"


using namespace CTTimer;
int main(){

  //int  su = sum_non(1,4);
  std::cout<<sum(1.3,2.3,3.6,4.6,56.4,7623.4,7.2)<<std::endl;
  //std::cout<<su<<std::endl;
  std::cout<<multi(23.45,3434.234,34325.2343,23523526.3)<<std::endl;
  static_assert(multi(23.45,3434.234,34325.2343,23523526.3));
  std::cout<<interpolate_1D(1.0, 2.0, 0.2)<<std::endl;
  std::cout<<interpolate_1D(10.0, 20.0,0.2)<<std::endl;
  std::cout<<interpolate_1D(20.0, 30.0,0.2)<<std::endl;
  std::cout<<interpolate_1D(interpolate_1D(10.0, 20.0,0.2), interpolate_1D(20.0, 30.0,0.2), 0.3)<<std::endl;
  std::cout<<interpolate_2D(10.0, 20.0, 20.0, 30.0, 0.2, 0.3)<<std::endl;
  static_assert(sum(1.3,2.3,3.6,4.6,56.4,7623.4,7.2));
  static_assert(multi(23.45,3434.234,34325.2343));
  static_assert(interpolate_1D(1.0, 2.0, 0.2));
  static_assert(interpolate_2D(10.0, 20.0, 20.0, 30.0, 0.2, 0.3));
  
  std::cout<<get_ratio_1D(1.1, 2.1, 2.1)<<std::endl;
  static_assert(get_ratio_1D(1.1, 2.1, 1.1)==0);
  
 
  //using FSEQ = float ...;
  constexpr auto pairs = get_index_id(4.0, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5);
//  get_index_id< float, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5>(2.2);
  std::cout<<pairs<<std::endl;

  std::cout<< get_top(1.2, 2.0, 3.0, 4.0) <<std::endl;
  //std::cout<<x<<" "<<y<<std::endl;
  std::cout<<get_index_id(4.0, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5).first<<std::endl;
  std::cout<<get_index_id(299.1, 
1.01	,	2.01	,	3.01	,	4.01	,	5.01	,	6.01	,	7.01	,	8.01	,	9.01	,	10.01	,
11.01	,	12.01	,	13.01	,	14.01	,	15.01	,	16.01	,	17.01	,	18.01	,	19.01	,	20.01	,
21.01	,	22.01	,	23.01	,	24.01	,	25.01	,	26.01	,	27.01	,	28.01	,	29.01	,	30.01	,
31.01	,	32.01	,	33.01	,	34.01	,	35.01	,	36.01	,	37.01	,	38.01	,	39.01	,	40.01	,
41.01	,	42.01	,	43.01	,	44.01	,	45.01	,	46.01	,	47.01	,	48.01	,	49.01	,	50.01	,
51.01	,	52.01	,	53.01	,	54.01	,	55.01	,	56.01	,	57.01	,	58.01	,	59.01	,	60.01	,
61.01	,	62.01	,	63.01	,	64.01	,	65.01	,	66.01	,	67.01	,	68.01	,	69.01	,	70.01	,
71.01	,	72.01	,	73.01	,	74.01	,	75.01	,	76.01	,	77.01	,	78.01	,	79.01	,	80.01	,
81.01	,	82.01	,	83.01	,	84.01	,	85.01	,	86.01	,	87.01	,	88.01	,	89.01	,	90.01	,
91.01	,	92.01	,	93.01	,	94.01	,	95.01	,	96.01	,	97.01	,	98.01	,	99.01	,	100.01	,
101.01	,	102.01	,	103.01	,	104.01	,	105.01	,	106.01	,	107.01	,	108.01	,	109.01	,	110.01	,
111.01	,	112.01	,	113.01	,	114.01	,	115.01	,	116.01	,	117.01	,	118.01	,	119.01	,	120.01	,
121.01	,	122.01	,	123.01	,	124.01	,	125.01	,	126.01	,	127.01	,	128.01	,	129.01	,	130.01	,
131.01	,	132.01	,	133.01	,	134.01	,	135.01	,	136.01	,	137.01	,	138.01	,	139.01	,	140.01	,
141.01	,	142.01	,	143.01	,	144.01	,	145.01	,	146.01	,	147.01	,	148.01	,	149.01	,	150.01	,
151.01	,	152.01	,	153.01	,	154.01	,	155.01	,	156.01	,	157.01	,	158.01	,	159.01	,	160.01	,
161.01	,	162.01	,	163.01	,	164.01	,	165.01	,	166.01	,	167.01	,	168.01	,	169.01	,	170.01	,
171.01	,	172.01	,	173.01	,	174.01	,	175.01	,	176.01	,	177.01	,	178.01	,	179.01	,	180.01	,
181.01	,	182.01	,	183.01	,	184.01	,	185.01	,	186.01	,	187.01	,	188.01	,	189.01	,	190.01	,
191.01	,	192.01	,	193.01	,	194.01	,	195.01	,	196.01	,	197.01	,	198.01	,	199.01	,	200.01	,
201.01	,	202.01	,	203.01	,	204.01	,	205.01	,	206.01	,	207.01	,	208.01	,	209.01	,	210.01	,
211.01	,	212.01	,	213.01	,	214.01	,	215.01	,	216.01	,	217.01	,	218.01	,	219.01	,	220.01	,
221.01	,	222.01	,	223.01	,	224.01	,	225.01	,	226.01	,	227.01	,	228.01	,	229.01	,	230.01	,
231.01	,	232.01	,	233.01	,	234.01	,	235.01	,	236.01	,	237.01	,	238.01	,	239.01	,	240.01	,
241.01	,	242.01	,	243.01	,	244.01	,	245.01	,	246.01	,	247.01	,	248.01	,	249.01	,	250.01	,
251.01	,	252.01	,	253.01	,	254.01	,	255.01	,	256.01	,	257.01	,	258.01	,	259.01	,	260.01	,
261.01	,	262.01	,	263.01	,	264.01	,	265.01	,	266.01	,	267.01	,	268.01	,	269.01	,	270.01	,
271.01	,	272.01	,	273.01	,	274.01	,	275.01	,	276.01	,	277.01	,	278.01	,	279.01	,	280.01	,
281.01	,	282.01	,	283.01	,	284.01	,	285.01	,	286.01	,	287.01	,	288.01	,	289.01	,	290.01	,
291.01	,	292.01	,	293.01	,	294.01	,	295.01	,	296.01	,	297.01	,	298.01	,	299.01	,	300.01	
  ).first<<std::endl;


  test();
  static_assert(std::make_pair(1.3,'c').first ==1.3);
  static_assert(get_index_id(4.0, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5).first == 5);
  const auto [x, y] = get_index_id(4.0, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5);
  std::cout<<x<<" "<<y<<std::endl;
  
  const bool t = false;
  static_assert(t == false);

}
