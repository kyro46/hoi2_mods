
##############################
# Country definition for MAN #
##############################

province =
{ id       = 1379
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}            # Harbin

#####################
# Country main data #
#####################

country =
{ tag                    = MAN
  puppet                 = JAP
  control                = JAP
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 100
  money                  = 10
  consumer = 0.1667 
  supply = 0.1667 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 99.5 # 100 - building queue
  capital                = 1390
  free                   = { energy = 14 metal = 7 rare_materials = 4 }
  diplomacy =
  { relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -75 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = POR value = 3 }
	relation = { tag = USA value = 1 }
  }
  nationalprovinces      = { 1202 1374 1375 1377 1378 1379 1380 1381 1382 1386 1387 1388 1389 1390 1394 1395 1396 1397 1398 1530 }
  ownedprovinces         = { 1374 1375 1377 1378 1379 1380 1381 1382 1386 1387 1388 1389 1390 1394 1395 1396 1530 }
  controlledprovinces    = { 1374 1375 1377 1378 1379 1380 1381 1382 1386 1387 1388 1389 1390 1394 1395 1396 1530 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1020 1190 2150 2290 2400 4010 5080 }
  blueprints             = { 6010 6030 2300 2310 5310 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 58001 }
  headofgovernment       = { type = 9 id = 58002 }
  foreignminister        = { type = 9 id = 58003 }
  armamentminister       = { type = 9 id = 58004 }
  ministerofsecurity     = { type = 9 id = 58005 }
  ministerofintelligence = { type = 9 id = 58006 }
  chiefofstaff           = { type = 9 id = 58007 }
  chiefofarmy            = { type = 9 id = 58008 }
  chiefofnavy            = { type = 9 id = 58009 }
  chiefofair             = { type = 9 id = 58010 }
  # Basic Construction Engineering Development Process
  landunit =
  { location = 1389
    id       = { type = 28500 id = 1 }
    name     = "Di'1 Fang'tien Jüntuan"
    division =
    { id       = { type = 28500 id = 2 }
      name     = "7 Man'chu Lü"
      type     = militia
      strength = 90
    }
  }
  landunit =
  { location = 1382
    id       = { type = 28500 id = 3 }
    name     = "Di'3 Qiqihar Jüntuan"
    division =
    { id       = { type = 28500 id = 4 }
      name     = "9 Man'chu Lü"
      type     = militia
      strength = 75
    }
  }
  landunit =
  { location = 1379
    id       = { type = 28500 id = 5 }
    name     = "Di'4 Harbin Jüntuan"
    division =
    { id       = { type = 28500 id = 6 }
      name     = "10 Man'chu Lü"
      type     = militia
      strength = 15
    }
  }
  landunit =
  { location = 1374
    id       = { type = 28500 id = 7 }
    name     = "Di'5 Chengde Jüntuan"
    division =
    { id       = { type = 28500 id = 8 }
      name     = "12 Man'chu Lü"
      type     = militia
      strength = 45
    }
  }
  landunit =
  { location = 1389
    id       = { type = 28500 id = 9 }
    name     = "Di'2 Ji'lin Jüntuan"
    division =
    { id       = { type = 28500 id = 10 }
      name     = "8 Man'chu Lü"
      type     = militia
      strength = 60
    }
    division =
    { id       = { type = 28500 id = 11 }
      name     = "2 Man'chu Qi'Bing"
      type     = cavalry
      strength = 45
    }
  } 
	province_development = { 
		id = { type = 28500 id = 100 } 
		name = "" 
		progress = 0.0000 
		location = 1389 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = september 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 1479 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 28500 id = 101 } 
		name = "" 
		progress = 0.0000 
		location = 1390 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = september 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 1479 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 28500 id = 102 } 
		name = "" 
		progress = 0.0000 
		location = 1379 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = september 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 1479 
		days_for_first = 125 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 28500 id = 103 } 
		name = "" 
		progress = 0.0000 
		location = 1395 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2270 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 28500 id = 104 } 
		name = "" 
		progress = 0.0000 
		location = 1396 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2270 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}