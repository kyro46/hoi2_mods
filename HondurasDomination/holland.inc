
##############################
# Country definition for HOL #
##############################

province =
{ id         = 46
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
}              # Rotterdam
province =
{ id         = 47
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Amsterdam
province = { id = 49 anti_air = 2 } # Eindhoven
province = { id = 874 supplypool = 1 metalpool = 132 } # Paramaribo
province =
{ id         = 1359
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
  rarematerialspool = 113
  supplypool = 1
}              # Oosthaven
province =
{ id         = 1628
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 4 current_size = 4 }
  rarematerialspool = 113
  oilpool    = 1
  supplypool = 100
}              # Batavia
province =
{ id         = 1632
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
}              # Soerabaja
province = { id = 1641 supplypool = 1 } # Bandjermasin
province =
{ id         = 1653
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 2 current_size = 2 }
}              # Menado

#####################
# Country main data #
#####################

country =
{ tag                    = HOL
  capital                = 47
  manpower               = 38.6 # 40 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 868
  rare_materials         = 274
  oil                    = 500
  supplies               = 500
  money                  = 40
  consumer = 0.0900 
  supply = 0.0900 
  production = 0.8200 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  transports             = 273
  escorts                = 30
  diplomacy =
  { relation = { tag = BEL value = 150 }
    relation = { tag = CAN value = 80 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -20 }
    relation = { tag = JAP value = -50 }
    relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  # Homeland
  nationalprovinces      = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
                             1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
                             1674 801  874 
                           }
  # Homeland
  ownedprovinces         = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
                             1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
                             1674 801  874 
                           }
  # Homeland
  controlledprovinces    = { 46   47   48   49   77   78   79   1354 1355 1356 1357 1358 1359 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638
                             1639 1640 1641 1642 1643 1645 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1659 1660 1661 1662 1663 1664 1665 1673
                             1674 801  874 
                           }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  2150  2010  2290  2300  2310  2450  2460  2510  1010  1190  1110  9010  5010  5020  5080  5090  5190 
                             5200  5470  6010  6020  3010  3020  3070  3080  3130  3140  3190  3200  3250  3400  3410  3420  8010  8020  8030  8040 
                             8050  8070  14000
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 8001 }
  headofgovernment       = { type = 9 id = 8002 }
  foreignminister        = { type = 9 id = 8003 }
  armamentminister       = { type = 9 id = 8004 }
  ministerofsecurity     = { type = 9 id = 8005 }
  ministerofintelligence = { type = 9 id = 8006 }
  chiefofstaff           = { type = 9 id = 8007 }
  chiefofarmy            = { type = 9 id = 8008 }
  chiefofnavy            = { type = 9 id = 8009 }
  chiefofair             = { type = 9 id = 8010 }
  landunit =
  { id       = { type = 18500 id = 1 }
    location = 47
    name     = "1e Legerkorps"
    division =
    { id    = { type = 18500 id = 2 }
      name  = "1e Divisie"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18500 id = 3 }
      name = "2e Divisie"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18500 id = 4 }
    location = 77
    name     = "2e Legerkorps"
    division =
    { id    = { type = 18500 id = 5 }
      name  = "3e Divisie"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18500 id = 6 }
      name = "4e Divisie"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18500 id = 7 }
    location = 49
    name     = "3e Legerkorps"
    division =
    { id    = { type = 18500 id = 8 }
      name  = "5e Divisie"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18500 id = 9 }
      name = "6e Divisie"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18500 id = 10 }
    location = 79
    name     = "4e Legerkorps"
    division =
    { id    = { type = 18500 id = 11 }
      name  = "7e Divisie"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18500 id = 12 }
      name = "8e Divisie"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18500 id = 13 }
    location = 1628
    name     = "Koninklijk Nederlands Indisch Leger"
    division =
    { id   = { type = 18500 id = 14 }
      name = "Ie Divisie 'Java'"
      type = infantry
    }
    division =
    { id   = { type = 18500 id = 15 }
      name = "IIe Divisie 'Java'"
      type = infantry
    }
    division =
    { id   = { type = 18500 id = 16 }
      name = "IIIe Divisie 'Java'"
      type = infantry
    }
  }
  # ################################################################
  navalunit =
  { id       = { type = 18500 id = 17 }
    location = 47
    base     = 47
    name     = "Koninklijke Vloot"
    division =
    { id    = { type = 18500 id = 18 }
      name  = "HrMs De Ruyter"
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 18500 id = 19 }
      name  = "HrMs Java"
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 18500 id = 20 }
      name  = "HrMs Sumatra"
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 18500 id = 21 }
      name  = "1e Torpedobootjager Smaldeel"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 18500 id = 22 }
      name  = "2e Torpedobootjager Smaldeel"
      type  = destroyer
      model = 1
      extra1 = naval_anti_air_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 18500 id = 27 }
      name  = "1e Onderzeeboot Smaldeel"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 18500 id = 28 }
      name  = "2e Onderzeeboot Smaldeel"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 18500 id = 29 }
      name  = "3e Onderzeeboot Smaldeel"
      type  = submarine
      model = 2
    }
    division =
    { id   = { type = 18500 id = 23 }
      name = "1e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 18500 id = 24 }
      name = "2e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 18500 id = 25 }
      name = "3e Transport Smaldeel"
      type = transport
    }
    division =
    { id   = { type = 18500 id = 26 }
      name = "4e Transport Smaldeel"
      type = transport
    }
  } 
	convoy = { 
		id = { type = 18500 id = 30 } 
		istradeconvoy = no 
		transports = 50 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 1359 2075 2076 2071 2070 2064 2065 2014 2009 2007 2272 2582 2287 2288 2580 2295 2594 2300 2593 2424 2595 2420 2596 2414 2413 2412 2395 46 } 
		} 
	convoy = { 
		id = { type = 18500 id = 31 } 
		istradeconvoy = no 
		transports = 50 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = no 
		supplies = no 
		path = { 1628 2077 2076 2071 2070 2064 2065 2014 2009 2007 2272 2582 2287 2288 2580 2295 2594 2300 2593 2424 2595 2420 2596 2414 2413 2412 2395 46 } 
		} 
	convoy = { 
		id = { type = 18500 id = 32 } 
		istradeconvoy = no 
		transports = 35 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 1641 2141 2142 2080 2079 2069 2068 2065 2014 2009 2007 2272 2582 2287 2288 2580 2295 2594 2300 2593 2424 2595 2420 2596 2414 2413 2412 2395 46 } 
		} 
	convoy = { 
		id = { type = 18500 id = 33 } 
		istradeconvoy = no 
		transports = 39 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = no 
		supplies = no 
		path = { 874 2517 2542 2543 2308 2306 2304 2424 2595 2420 2596 2414 2413 2412 2395 46 } 
		} 
	convoy = { 
		id = { type = 18500 id = 48 } 
		trade_id = { type = 16384 id = 317 } 
		istradeconvoy = yes 
		transports = 26 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 754 2571 1962 2574 2575 2576 2524 2539 2540 2314 2312 2353 2354 2361 2371 2421 2599 2400 2399 2472 2395 46 } 
		} 
	convoy = { 
		id = { type = 18500 id = 49 } 
		trade_id = { type = 16384 id = 319 } 
		istradeconvoy = yes 
		transports = 27 
		escorts = 0 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 831 2556 1966 1963 2574 2575 2576 2524 2539 2540 2314 2312 2353 2354 2361 2371 2421 2599 2400 2399 2472 2395 46 } 
		} 
	province_development = { 
		id = { type = 18500 id = 34 } 
		name = "" 
		progress = 0.0000 
		location = 47 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = april 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 35 } 
		name = "" 
		progress = 0.0000 
		location = 46 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = july 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 202 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 36 } 
		name = "" 
		progress = 0.0000 
		location = 77 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = april 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 37 } 
		name = "" 
		progress = 0.0000 
		location = 49 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = august 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 38 } 
		name = "" 
		progress = 0.0000 
		location = 1630 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 23 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 39 } 
		name = "" 
		progress = 0.0000 
		location = 1632 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 23 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 40 } 
		name = "" 
		progress = 0.0000 
		location = 1358 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = december 
			day = 23 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 126 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 41 } 
		name = "" 
		progress = 0.0000 
		location = 1629 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = july 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 151 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 42 } 
		name = "" 
		progress = 0.0000 
		location = 1355 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2620 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 43 } 
		name = "" 
		progress = 0.0000 
		location = 1354 
		cost = 2.0000 
		date = { 
			year = 1951 
			month = december 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 44 } 
		name = "" 
		progress = 0.0000 
		location = 1356 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = december 
			day = 23 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 126 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 45 } 
		name = "" 
		progress = 0.0000 
		location = 1357 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = november 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2620 
		days_for_first = 151 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 46 } 
		name = "" 
		progress = 0.0000 
		location = 1359 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = november 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2620 
		days_for_first = 151 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 18500 id = 47 } 
		name = "" 
		progress = 0.0000 
		location = 874 
		cost = 2.0000 
		date = { 
			year = 1951 
			month = december 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2299 
		days_for_first = 252 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
