/*
This file is part of Fec Software project.

Fec Software is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

Fec Software is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Fec Software; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

Copyright 2002 - 2003, Frederic DROUHIN - Universite de Haute-Alsace, Mulhouse-France
*/
#ifndef PIXMAPLED_H
#define PIXMAPLED_H

static const char* const redLed_data[] = { 
"40 40 12 1",
"# c #aaaaaa",
". c #e6e6e6",
"a c #ff0000",
"b c #ff1919",
"c c #ff3232",
"d c #ff4b4b",
"e c #ff6464",
"f c #ff7d7d",
"g c #ff9696",
"h c #ffafaf",
"i c #ffc8c8",
"j c #ffe1e1",
".........................................",
"................#########................",
".............###aaaaaaaaa###.............",
"...........##aaaaaaaaaaaaaaa##...........",
".........##aaaaaaaaaaaaaaaaaaa##.........",
"........##aaaaaaaaaaaaaaaaaaaaa##........",
".......#aaaaaaaaaaaaaaaaaaaaaaaaa#.......",
"......#aaaaaaaaaaaaabaaaaaaaaaaaaa#......",
".....#aaaaaaaaabbbbccbbbbbaaaaaaaaa#.....",
"....##aaaaaaabbccccdcccccbbbaaaaaaa##....",
"....#aaaaaaabccdddeeddddcccbbaaaaaaa#....",
"...#aaaaaaabcddeeefeeeeeddccbbbaaaaaa#...",
"...#aaaaaabcdeeffggffffeeddccbbaaaaaa#...",
"..#aaaaaabcdefggghggggffeeddccbbaaaaaa#..",
"..#aaaaaabcdegghiihhhggffeeddccbbaaaaa#..",
"..#aaaaabcdefghiiiiihhggffeedccbbaaaaa#..",
".#aaaaaabcdefgiijjiihhggffeeddccbbaaaaa#.",
".#aaaaaabcdeghiijjiihhggffeeddccbbaaaaa#.",
".#aaaaaabcefgghiiiiihhggffeeddccbbaaaaa#.",
".#aaaaaacdeefghiiiiihhggffeeddccbbaaaaa#.",
".#aaaaabccdefghhhhhhhhggffeeddccbbaaaaa#.",
".#aaaaaabcdefgghhhhhhgggffeeddccbbaaaaa#.",
".#aaaaaabcdeffgggggggggfffeeddccbbaaaaa#.",
".#aaaaaabcdeeffgggggggfffeeeddccbbaaaaa#.",
".#aaaaaabccdeeffffffffffeeeddcccbbaaaaa#.",
"..#aaaaabbcddeeffffffffeeedddccbbbaaaa#..",
"..#aaaaaabccddeeeeeeeeeeedddcccbbaaaaa#..",
"..#aaaaaabbccddeeeeeeeeedddcccbbbaaaaa#..",
"...#aaaaaabbccddddddddddddcccbbbaaaaa#...",
"...#aaaaaaabbcccddddddddccccbbbaaaaaa#...",
"....#aaaaaabbbcccccccccccccbbbbaaaaa#....",
"....##aaaaaaabbbcccccccccbbbbaaaaaa##....",
".....#aaaaaaaabbbbbbbbbbbbbbaaaaaaa#.....",
"......#aaaaaaaaabbbbbbbbbbaaaaaaaa#......",
".......#aaaaaaaaaaaaaaaaaaaaaaaaa#.......",
"........##aaaaaaaaaaaaaaaaaaaaa##........",
".........##aaaaaaaaaaaaaaaaaaa##.........",
"...........##aaaaaaaaaaaaaaa##...........",
".............###aaaaaaaaa###.............",
"................#########................"};

static const char* const greenLed_data[] = { 
"42 41 12 1",
"a c #00ff00",
"b c #19ff19",
"c c #32ff32",
"d c #4bff4b",
"e c #64ff64",
"f c #7dff7d",
"g c #96ff96",
"# c #aaaaaa",
"h c #afffaf",
"i c #c8ffc8",
"j c #e1ffe1",
". c #e6e6e6",
"..........................................",
".................#########................",
"..............###aaaaaaaaa###.............",
"............##aaaaaaaaaaaaaaa##...........",
"..........##aaaaaaaaaaaaaaaaaaa##.........",
".........##aaaaaaaaaaaaaaaaaaaaa##........",
"........#aaaaaaaaaaaaaaaaaaaaaaaaa#.......",
".......#aaaaaaaaaaaaabaaaaaaaaaaaaa#......",
"......#aaaaaaaaabbbbccbbbbbaaaaaaaaa#.....",
".....##aaaaaaabbccccdcccccbbbaaaaaaa##....",
".....#aaaaaaabccdddeeddddcccbbaaaaaaa#....",
"....#aaaaaaabcddeeefeeeeeddccbbbaaaaaa#...",
"....#aaaaaabcdeeffggffffeeddccbbaaaaaa#...",
"...#aaaaaabcdefggghggggffeeddccbbaaaaaa#..",
"...#aaaaaabcdegghiihhhggffeeddccbbaaaaa#..",
"...#aaaaabcdefghiiiiihhggffeedccbbaaaaa#..",
"..#aaaaaabcdefgiijjiihhggffeeddccbbaaaaa#.",
"..#aaaaaabcdeghiijjiihhggffeeddccbbaaaaa#.",
"..#aaaaaabcefgghiiiiihhggffeeddccbbaaaaa#.",
"..#aaaaaacdeefghiiiiihhggffeeddccbbaaaaa#.",
"..#aaaaabccdefghhhhhhhhggffeeddccbbaaaaa#.",
"..#aaaaaabcdefgghhhhhhgggffeeddccbbaaaaa#.",
"..#aaaaaabcdeffgggggggggfffeeddccbbaaaaa#.",
"..#aaaaaabcdeeffgggggggfffeeeddccbbaaaaa#.",
"..#aaaaaabccdeeffffffffffeeeddcccbbaaaaa#.",
"...#aaaaabbcddeeffffffffeeedddccbbbaaaa#..",
"...#aaaaaabccddeeeeeeeeeeedddcccbbaaaaa#..",
"...#aaaaaabbccddeeeeeeeeedddcccbbbaaaaa#..",
"....#aaaaaabbccddddddddddddcccbbbaaaaa#...",
"....#aaaaaaabbcccddddddddccccbbbaaaaaa#...",
".....#aaaaaabbbcccccccccccccbbbbaaaaa#....",
".....##aaaaaaabbbcccccccccbbbbaaaaaa##....",
"......#aaaaaaaabbbbbbbbbbbbbbaaaaaaa#.....",
".......#aaaaaaaaabbbbbbbbbbaaaaaaaa#......",
"........#aaaaaaaaaaaaaaaaaaaaaaaaa#.......",
".........##aaaaaaaaaaaaaaaaaaaaa##........",
"..........##aaaaaaaaaaaaaaaaaaa##.........",
"............##aaaaaaaaaaaaaaa##...........",
"..............###aaaaaaaaa###.............",
".................#########................",
".........................................."};

static const char* const blackLed_data[] = { 
"40 40 3 1",
"a c #000000",
"# c #aaaaaa",
". c #e6e6e6",
"..........................................",
".................#########................",
"..............###aaaaaaaaa###.............",
"............##aaaaaaaaaaaaaaa##...........",
"..........##aaaaaaaaaaaaaaaaaaa##.........",
".........##aaaaaaaaaaaaaaaaaaaaa##........",
"........#aaaaaaaaaaaaaaaaaaaaaaaaa#.......",
".......#aaaaaaaaaaaaaaaaaaaaaaaaaaa#......",
"......#aaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.....",
".....##aaaaaaaaaaaaaaaaaaaaaaaaaaaaa##....",
".....#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#....",
"....#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#...",
"...#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#..",
"...#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#..",
"...#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#..",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"..#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.",
"...#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#..",
"...#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#..",
"...#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#..",
"....#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#...",
".....#aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa#....",
".....##aaaaaaaaaaaaaaaaaaaaaaaaaaaaa##....",
"......#aaaaaaaaaaaaaaaaaaaaaaaaaaaaa#.....",
".......#aaaaaaaaaaaaaaaaaaaaaaaaaaa#......",
"........#aaaaaaaaaaaaaaaaaaaaaaaaa#.......",
".........##aaaaaaaaaaaaaaaaaaaaa##........",
"..........##aaaaaaaaaaaaaaaaaaa##.........",
"............##aaaaaaaaaaaaaaa##...........",
"..............###aaaaaaaaa###.............",
".................#########................"};

static const char* const orangeLed_data[] = { 
"40 40 12 1",
"# c #aaaaaa",
". c #e6e6e6",
"a c #ffaa00",
"b c #ffb219",
"c c #ffbb32",
"d c #ffc34b",
"e c #ffcb64",
"f c #ffd47d",
"g c #ffdc96",
"h c #ffe4af",
"i c #ffedc8",
"j c #fff5e1",
"........................................",
"................#########...............",
".............###aaaaaaaaa###............",
"...........##aaaaaaaaaaaaaaa##..........",
".........##aaaaaaaaaaaaaaaaaaa##........",
"........##aaaaaaaaaaaaaaaaaaaaa##.......",
".......#aaaaaaaaaaaaaaaaaaaaaaaaa#......",
"......#aaaaaaaaaaaaabaaaaaaaaaaaaa#.....",
".....#aaaaaaaaabbbbccbbbbbaaaaaaaaa#....",
"....##aaaaaaabbccccdcccccbbbaaaaaaa##...",
"....#aaaaaaabccdddeeddddcccbbaaaaaaa#...",
"...#aaaaaaabcddeeefeeeeeddccbbbaaaaaa#..",
"...#aaaaaabcdeeffggffffeeddccbbaaaaaa#..",
"..#aaaaaabcdefggghggggffeeddccbbaaaaaa#.",
"..#aaaaaabcdegghiihhhggffeeddccbbaaaaa#.",
"..#aaaaabcdefghiiiiihhggffeedccbbaaaaa#.",
".#aaaaaabcdefgiijjiihhggffeeddccbbaaaaa#",
".#aaaaaabcdeghiijjiihhggffeeddccbbaaaaa#",
".#aaaaaabcefgghiiiiihhggffeeddccbbaaaaa#",
".#aaaaaacdeefghiiiiihhggffeeddccbbaaaaa#",
".#aaaaabccdefghhhhhhhhggffeeddccbbaaaaa#",
".#aaaaaabcdefgghhhhhhgggffeeddccbbaaaaa#",
".#aaaaaabcdeffgggggggggfffeeddccbbaaaaa#",
".#aaaaaabcdeeffgggggggfffeeeddccbbaaaaa#",
".#aaaaaabccdeeffffffffffeeeddcccbbaaaaa#",
"..#aaaaabbcddeeffffffffeeedddccbbbaaaa#.",
"..#aaaaaabccddeeeeeeeeeeedddcccbbaaaaa#.",
"..#aaaaaabbccddeeeeeeeeedddcccbbbaaaaa#.",
"...#aaaaaabbccddddddddddddcccbbbaaaaa#..",
"...#aaaaaaabbcccddddddddccccbbbaaaaaa#..",
"....#aaaaaabbbcccccccccccccbbbbaaaaa#...",
"....##aaaaaaabbbcccccccccbbbbaaaaaa##...",
".....#aaaaaaaabbbbbbbbbbbbbbaaaaaaa#....",
"......#aaaaaaaaabbbbbbbbbbaaaaaaaa#.....",
".......#aaaaaaaaaaaaaaaaaaaaaaaaa#......",
"........##aaaaaaaaaaaaaaaaaaaaa##.......",
".........##aaaaaaaaaaaaaaaaaaa##........",
"...........##aaaaaaaaaaaaaaa##..........",
".............###aaaaaaaaa###............",
"................#########..............."};


#endif