
##############################
# Country definition for HUN #
##############################

province = { id = 456 ic = 2 } # Pecs
province =
{ id       = 457
  anti_air = 2
  air_base = { size = 8 current_size = 8 }
  ic       = 2
}            # Budapest
province = { id = 497 ic = 2 } # Debrecen

#####################
# Country main data #
#####################

country =
{ tag                    = HUN
  manpower               = 148.5 # 150 - building queue
  capital                = 457
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2356 
  supply = 0.0607 
  production = 0.7037 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  diplomacy =
  { relation =
    { tag        = AUS
      value      = 100
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = CZE value = -50 }
    relation = { tag = ALB value = 1 }
	relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 75 }
    relation = { tag = FRA value = -70 }
    relation = { tag = GER value = 100 }
    relation = { tag = IRE value = 25 }
    relation = { tag = JAP value = 4 }
	relation = { tag = TUR value = 11 }
	relation = { tag = ITA value = 125 }
    relation = { tag = POL value = 50 }
    relation = { tag = POR value = 5 }
	relation = { tag = ROM value = 1 }
    relation = { tag = YUG value = 80 }
  }
  SpyInfo                = { country = "HUN" NumberOfSpies = 7 }
  #SpyInfo                = { country = "ENG" NumberOfSpies = 8 }
  #SpyInfo                = { country = "SOV" NumberOfSpies = 8 }
  #SpyInfo                = { country = "CZE" NumberOfSpies = 5 }
  #SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  #SpyInfo                = { country = "YUG" NumberOfSpies = 6 }
  #SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  #SpyInfo                = { country = "BUL" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ALB" NumberOfSpies = 3 }
  #SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  #SpyInfo                = { country = "ROM" NumberOfSpies = 6 }
  #SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FIN" NumberOfSpies = 3 }
  #SpyInfo                = { country = "FRA" NumberOfSpies = 8 }
  nationalprovinces      = { 456 457 458 491 492 497 428 496 498 476 477 478 490 499 493 }
  ownedprovinces         = { 456 457 458 491 492 497 }
  controlledprovinces    = { 456 457 458 491 492 497 }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  2150  2010  2020  2290  2300  2310  2450  2460  2400  2510  1010  1190  1110  9010  5010  5020  5080 
                             5090  5190  6010  6020  14000
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 1
    free_market       = 4
    freedom           = 3
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 21001 }
  headofgovernment       = { type = 9 id = 21002 }
  foreignminister        = { type = 9 id = 21003 }
  armamentminister       = { type = 9 id = 21004 }
  ministerofsecurity     = { type = 9 id = 21005 }
  ministerofintelligence = { type = 9 id = 21006 }
  chiefofstaff           = { type = 9 id = 21125 }
  chiefofarmy            = { type = 9 id = 21140 }
  chiefofnavy            = { type = 9 id = 21010 }
  chiefofair             = { type = 9 id = 21009 }
  landunit =
  { id       = { type = 20500 id = 1 }
    name     = "Magyar Hadsereg"
    location = 457
    division =
    { id       = { type = 20500 id = 2 }
      name     = "6. gyaloghadosztály"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 20500 id = 3 }
      name     = "7. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 20500 id = 4 }
      name     = "10. gyaloghadosztály"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 20500 id = 5 }
    name     = "I Hadtest"
    location = 457
    division =
    { id       = { type = 20500 id = 6 }
      name     = "12. gyalog hadosztály"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 20500 id = 7 }
      name     = "13. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 20500 id = 8 }
      name     = "16. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 20500 id = 9 }
    name     = "II Hadtest"
    location = 457
    division =
    { id       = { type = 20500 id = 10 }
      name     = "20. gyaloghadosztály"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 20500 id = 11 }
      name     = "24. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 20500 id = 12 }
      name     = "25. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
  }
  airunit =
  { id       = { type = 20500 id = 13 }
    name     = "I Légihadsereg"
    location = 457
    base     = 457
    division =
    { id       = { type = 20500 id = 14 }
      name     = "I.Vadászosztály"
      type     = interceptor
      model    = 0
      strength = 30
    }
    division =
    { id       = { type = 20500 id = 15 }
      name     = "I.Vadászbombázó Osztály"
      type     = tactical_bomber
      model    = 0
      strength = 30
    }
  } 
	province_development = { 
		id = { type = 20500 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 457 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = june 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1280 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		speed_step = 2 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 458 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1280 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 456 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1280 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 203 } 
		name = "" 
		progress = 0.0000 
		location = 497 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1280 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 204 } 
		name = "" 
		progress = 0.0000 
		location = 491 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 205 } 
		name = "" 
		progress = 0.0000 
		location = 457 
		cost = 5.0000 
		date = { 
			year = 1940 
			month = august 
			day = 5 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 5 
		done = 0 
		days = 1656 
		days_for_first = 331 
		gearing_bonus = 0.0000 
		type = ic 
		}
}
