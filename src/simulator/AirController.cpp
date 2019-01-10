/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <fstream>

namespace atcsim{

AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
  std::list<Flight*> flights = Airport::getInstance()->getFlights();
  std::list<Flight*>::iterator it;

  // posiciones ruta de espera sector 1

  Position pos_s1_1(5000,-10000,3000);
	Position pos_s1_2(0,-10000,2740);
	Position pos_s1_3(0,-5000,2480);
	Position pos_s1_4(5000,-5000,2220);
	Position pos_s1_5(5000,-10000,1960);
	Position pos_s1_6(0,-10000,1700);
	Position pos_s1_7(0,-5000,1440);
	Position pos_s1_8(5000,-5000,1180);
  Position pos_s1_9(5000,-10000,920);
  Position pos_s1_10(0,-10000,660);
  Position pos_s1_11(0,-5000,400);
  Position pos_s1_12(5000,-5000,140);
	Position pos_s1_res(7000,-7500,1570);


	// rutas de espera sector 1

	Route r_s1_1,r_s1_2,r_s1_3,r_s1_4,r_s1_5,r_s1_6,r_s1_7,r_s1_8,r_s1_9,r_s1_10,r_s1_11,r_s1_12,r_s1_res;

  r_s1_1.pos = pos_s1_1;
	r_s1_1.speed = 100;
	r_s1_2.pos = pos_s1_2;
	r_s1_2.speed = 100;
	r_s1_3.pos = pos_s1_3;
	r_s1_3.speed = 100;
	r_s1_4.pos = pos_s1_4;
	r_s1_4.speed = 100;
	r_s1_5.pos = pos_s1_5;
	r_s1_5.speed = 100;
	r_s1_6.pos = pos_s1_6;
	r_s1_6.speed = 100;
	r_s1_7.pos = pos_s1_7;
	r_s1_7.speed = 100;
	r_s1_8.pos = pos_s1_8;
	r_s1_8.speed = 100;
  r_s1_9.pos = pos_s1_9;
	r_s1_9.speed = 100;
  r_s1_10.pos = pos_s1_10;
	r_s1_10.speed = 100;
  r_s1_11.pos = pos_s1_11;
	r_s1_11.speed = 100;
  r_s1_12.pos = pos_s1_12;
	r_s1_12.speed = 100;
	r_s1_res.pos = pos_s1_res;
	r_s1_res.speed = 100;


	// posiciones ruta de espera sector 2

	Position pos_s2_1(13000,-7000,3000);
	Position pos_s2_2(8000,-7000,2740);
	Position pos_s2_3(8000,-2000,2480);
	Position pos_s2_4(13000,-2000,2220);
	Position pos_s2_5(13000,-7000,1960);
	Position pos_s2_6(8000,-7000,1700);
	Position pos_s2_7(8000,-2000,1440);
	Position pos_s2_8(13000,-2000,1180);
  Position pos_s2_9(13000,-7000,920);
  Position pos_s2_10(8000,-7000,660);
  Position pos_s2_11(8000,-2000,400);
  Position pos_s2_12(13000,-2000,140);
	Position pos_s2_res(15000,-4500,1570);


	// rutas de espera sector 2

	Route r_s2_1,r_s2_2,r_s2_3,r_s2_4,r_s2_5,r_s2_6,r_s2_7,r_s2_8,r_s2_9,r_s2_10,r_s2_11,r_s2_12,r_s2_res;

	r_s2_1.pos = pos_s2_1;
	r_s2_1.speed = 100;
	r_s2_2.pos = pos_s2_2;
	r_s2_2.speed = 100;
	r_s2_3.pos = pos_s2_3;
	r_s2_3.speed = 100;
	r_s2_4.pos = pos_s2_4;
	r_s2_4.speed = 100;
	r_s2_5.pos = pos_s2_5;
	r_s2_5.speed = 100;
	r_s2_6.pos = pos_s2_6;
	r_s2_6.speed = 100;
	r_s2_7.pos = pos_s2_7;
	r_s2_7.speed = 100;
	r_s2_8.pos = pos_s2_8;
	r_s2_8.speed = 100;
  r_s2_9.pos = pos_s2_9;
	r_s2_9.speed = 100;
  r_s2_10.pos = pos_s2_10;
	r_s2_10.speed = 100;
  r_s2_11.pos = pos_s2_11;
	r_s2_11.speed = 100;
  r_s2_12.pos = pos_s2_12;
	r_s2_12.speed = 100;
	r_s2_res.pos = pos_s2_res;
	r_s2_res.speed = 100;

	// posiciones ruta de espera sector 3

	Position pos_s3_1(13000,7000,3000);
	Position pos_s3_2(8000,7000,2740);
	Position pos_s3_3(8000,2000,2480);
	Position pos_s3_4(13000,2000,2220);
	Position pos_s3_5(13000,7000,1960);
	Position pos_s3_6(8000,7000,1700);
	Position pos_s3_7(8000,2000,1440);
	Position pos_s3_8(13000,2000,1180);
  Position pos_s3_9(13000,7000,920);
  Position pos_s3_10(8000,7000,660);
  Position pos_s3_11(8000,2000,400);
  Position pos_s3_12(13000,2000,140);
	Position pos_s3_res(15000,4500,1570);


	// rutas de espera sector 3

	Route r_s3_1,r_s3_2,r_s3_3,r_s3_4,r_s3_5,r_s3_6,r_s3_7,r_s3_8,r_s3_9,r_s3_10,r_s3_11,r_s3_12,r_s3_res;

	r_s3_1.pos = pos_s3_1;
	r_s3_1.speed = 100;
	r_s3_2.pos = pos_s3_2;
	r_s3_2.speed = 100;
	r_s3_3.pos = pos_s3_3;
	r_s3_3.speed = 100;
	r_s3_4.pos = pos_s3_4;
	r_s3_4.speed = 100;
	r_s3_5.pos = pos_s3_5;
	r_s3_5.speed = 100;
	r_s3_6.pos = pos_s3_6;
	r_s3_6.speed = 100;
	r_s3_7.pos = pos_s3_7;
	r_s3_7.speed = 100;
	r_s3_8.pos = pos_s3_8;
	r_s3_8.speed = 100;
  r_s3_9.pos = pos_s3_9;
	r_s3_9.speed = 100;
  r_s3_10.pos = pos_s3_10;
	r_s3_10.speed = 100;
  r_s3_11.pos = pos_s3_11;
	r_s3_11.speed = 100;
  r_s3_12.pos = pos_s3_12;
	r_s3_12.speed = 100;
	r_s3_res.pos = pos_s3_res;
	r_s3_res.speed = 100;


	// posiciones ruta de espera sector 4

	Position pos_s4_1(5000,10000,3000);
	Position pos_s4_2(0,10000,2740);
	Position pos_s4_3(0,5000,2480);
	Position pos_s4_4(5000,5000,2220);
	Position pos_s4_5(5000,10000,1960);
	Position pos_s4_6(0,10000,1700);
	Position pos_s4_7(0,5000,1440);
	Position pos_s4_8(5000,5000,1180);
  Position pos_s4_9(5000,10000,920);
  Position pos_s4_10(0,10000,660);
  Position pos_s4_11(0,5000,400);
  Position pos_s4_12(5000,5000,140);
	Position pos_s4_res(7000,7500,1570);


	// rutas de espera sector 4

	Route r_s4_1,r_s4_2,r_s4_3,r_s4_4,r_s4_5,r_s4_6,r_s4_7,r_s4_8,r_s4_9,r_s4_10,r_s4_11,r_s4_12,r_s4_res;

	r_s4_1.pos = pos_s4_1;
	r_s4_1.speed = 100;
	r_s4_2.pos = pos_s4_2;
	r_s4_2.speed = 100;
	r_s4_3.pos = pos_s4_3;
	r_s4_3.speed = 100;
	r_s4_4.pos = pos_s4_4;
	r_s4_4.speed = 100;
	r_s4_5.pos = pos_s4_5;
	r_s4_5.speed = 100;
	r_s4_6.pos = pos_s4_6;
	r_s4_6.speed = 100;
	r_s4_7.pos = pos_s4_7;
	r_s4_7.speed = 100;
	r_s4_8.pos = pos_s4_8;
	r_s4_8.speed = 100;
  r_s4_9.pos = pos_s4_9;
	r_s4_9.speed = 100;
  r_s4_10.pos = pos_s4_10;
	r_s4_10.speed = 100;
  r_s4_11.pos = pos_s4_11;
	r_s4_11.speed = 100;
  r_s4_12.pos = pos_s4_12;
	r_s4_12.speed = 100;
	r_s4_res.pos = pos_s4_res;
	r_s4_res.speed = 100;


  // Posiciones aterrizaje

  Position pos0(3500.0, 0.0, 100.0);
  Position pos1(1500.0, 0.0, 50.0);
  Position pos2(200.0, 0.0, 25.0);
  Position pos3(-750.0, 0.0, 25.0);


  // Rutas aterrizaje

  Route r0, r1, r2, r3;

  r0.pos = pos0;
  r0.speed = 150.0;
  r1.pos = pos1;
  r1.speed = 100.0;
  r2.pos = pos2;
  r2.speed = 70.0;
  r3.pos = pos3;
  r3.speed = 10.0;


  if(!Airport::getInstance()->is_booked_landing())
	{
		Flight* primero = *(flights.begin());

		primero->getRoute()->clear();
	}


  for(it = flights.begin(); it!=flights.end(); ++it)
	 {
		if((*it)->getRoute()->empty())
		{
			if((*it)->getPosition().get_y() <= 0 && abs((*it)->getPosition().get_y()) >= (*it)->getPosition().get_x())
			{
				if(Airport::getInstance()->is_booked_landing()){
					(*it)->getRoute()->push_back(r_s1_1);
					(*it)->getRoute()->push_back(r_s1_2);
					(*it)->getRoute()->push_back(r_s1_3);
					(*it)->getRoute()->push_back(r_s1_4);
					(*it)->getRoute()->push_back(r_s1_5);
					(*it)->getRoute()->push_back(r_s1_6);
					(*it)->getRoute()->push_back(r_s1_7);
					(*it)->getRoute()->push_back(r_s1_8);
          (*it)->getRoute()->push_back(r_s1_9);
          (*it)->getRoute()->push_back(r_s1_10);
          (*it)->getRoute()->push_back(r_s1_11);
          (*it)->getRoute()->push_back(r_s1_12);
					(*it)->getRoute()->push_back(r_s1_res);
				}else{
					Airport::getInstance()->book_landing();
					(*it)->getRoute()->push_back(r3);
					(*it)->getRoute()->push_front(r2);
					(*it)->getRoute()->push_front(r1);
					(*it)->getRoute()->push_front(r0);
				}
			}else if((*it)->getPosition().get_y() <= 0 && abs((*it)->getPosition().get_y()) <= (*it)->getPosition().get_x()){
				if(Airport::getInstance()->is_booked_landing()){
					(*it)->getRoute()->push_back(r_s2_1);
					(*it)->getRoute()->push_back(r_s2_2);
					(*it)->getRoute()->push_back(r_s2_3);
					(*it)->getRoute()->push_back(r_s2_4);
					(*it)->getRoute()->push_back(r_s2_5);
					(*it)->getRoute()->push_back(r_s2_6);
					(*it)->getRoute()->push_back(r_s2_7);
					(*it)->getRoute()->push_back(r_s2_8);
          (*it)->getRoute()->push_back(r_s2_9);
          (*it)->getRoute()->push_back(r_s2_10);
          (*it)->getRoute()->push_back(r_s2_11);
          (*it)->getRoute()->push_back(r_s2_12);
					(*it)->getRoute()->push_back(r_s2_res);
				}else{
					Airport::getInstance()->book_landing();
					(*it)->getRoute()->push_back(r3);
					(*it)->getRoute()->push_front(r2);
					(*it)->getRoute()->push_front(r1);
					(*it)->getRoute()->push_front(r0);
				}
			}else if((*it)->getPosition().get_y() >= 0 && abs((*it)->getPosition().get_y()) <= (*it)->getPosition().get_x()){
				if(Airport::getInstance()->is_booked_landing()){
					(*it)->getRoute()->push_back(r_s3_1);
					(*it)->getRoute()->push_back(r_s3_2);
					(*it)->getRoute()->push_back(r_s3_3);
					(*it)->getRoute()->push_back(r_s3_4);
					(*it)->getRoute()->push_back(r_s3_5);
					(*it)->getRoute()->push_back(r_s3_6);
					(*it)->getRoute()->push_back(r_s3_7);
					(*it)->getRoute()->push_back(r_s3_8);
          (*it)->getRoute()->push_back(r_s3_9);
          (*it)->getRoute()->push_back(r_s3_10);
          (*it)->getRoute()->push_back(r_s3_11);
          (*it)->getRoute()->push_back(r_s3_12);
          (*it)->getRoute()->push_back(r_s3_res);
				}else{
					Airport::getInstance()->book_landing();
					(*it)->getRoute()->push_back(r3);
					(*it)->getRoute()->push_front(r2);
					(*it)->getRoute()->push_front(r1);
					(*it)->getRoute()->push_front(r0);
				}
			}else if((*it)->getPosition().get_y() >= 0 && abs((*it)->getPosition().get_y()) >= (*it)->getPosition().get_x()){
				if(Airport::getInstance()->is_booked_landing()){
					(*it)->getRoute()->push_back(r_s4_1);
					(*it)->getRoute()->push_back(r_s4_2);
					(*it)->getRoute()->push_back(r_s4_3);
					(*it)->getRoute()->push_back(r_s4_4);
					(*it)->getRoute()->push_back(r_s4_5);
					(*it)->getRoute()->push_back(r_s4_6);
					(*it)->getRoute()->push_back(r_s4_7);
					(*it)->getRoute()->push_back(r_s4_8);
          (*it)->getRoute()->push_back(r_s4_9);
          (*it)->getRoute()->push_back(r_s4_10);
          (*it)->getRoute()->push_back(r_s4_11);
          (*it)->getRoute()->push_back(r_s4_12);
					(*it)->getRoute()->push_back(r_s4_res);
				}else{
					Airport::getInstance()->book_landing();
					(*it)->getRoute()->push_back(r3);
					(*it)->getRoute()->push_front(r2);
					(*it)->getRoute()->push_front(r1);
					(*it)->getRoute()->push_front(r0);
        }
      }
    }
  }
}

}  // namespace atcsim
