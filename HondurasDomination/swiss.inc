
##############################
# Country definition for SCH #
##############################

province = { id = 372 landfort = 4 anti_air = 3 } # Chur
province = { id = 530 landfort = 5 anti_air = 3 } # Geneva
province =
{ id       = 532
  anti_air = 5
  air_base = { size = 4 current_size = 4 }
  landfort = 5
}            # Bern
province = { id = 533 landfort = 5 anti_air = 3 } # Zürich

#####################
# Country main data #
#####################

country =
{ tag                    = SCH
  capital                = 532
  manpower               = 134.6 # 135 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 25
  consumer = 0.2750 
  supply = 0.1000 
  production = 0.6250 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 1
  }
  nationalprovinces      = { 532 530 533 372 }
  ownedprovinces         = { 532 530 533 372 }
  controlledprovinces    = { 532 530 533 372 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2400 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1310 1110 9010 5010 5020 5080 5090 5190 6010 6020
                           }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SOV value = 1 }
    relation = { tag = USA value = 1 }
	relation = { tag = CAN value = 3 }
	relation = { tag = SWE value = 3 }
	relation = { tag = MEX value = 3 }
	
  }
  headofstate            = { type = 9 id = 17001 }
  headofgovernment       = { type = 9 id = 17002 }
  foreignminister        = { type = 9 id = 17003 }
  armamentminister       = { type = 9 id = 17004 }
  ministerofsecurity     = { type = 9 id = 17005 }
  ministerofintelligence = { type = 9 id = 17006 }
  chiefofstaff           = { type = 9 id = 17007 }
  chiefofarmy            = { type = 9 id = 17008 }
  chiefofnavy            = { type = 9 id = 17009 }
  chiefofair             = { type = 9 id = 17010 }
  # Superior Firepower
  # ####################
  # ###Swiss 36OOB####
  # ####################
  landunit =
  { id       = { type = 30600 id = 1 }
    location = 532
    name     = "I Armeekorps"
    division =
    { id       = { type = 30600 id = 2 }
      name     = "1. Felddivision"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
  # ############################
  # #############################
  landunit =
  { id       = { type = 30600 id = 3 }
    location = 533
    name     = "II Corps d' Armée"
    division =
    { id       = { type = 30600 id = 4 }
      name     = "2. Division d' Infanterie"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 30600 id = 5 }
      name     = "1. Alpenjägerdivision"
      strength = 30
      type     = bergsjaeger
    }
  }
  # ###########################
  # ############################
  landunit =
  { id       = { type = 30600 id = 6 }
    location = 530
    name     = "III Corpa di Armata"
    division =
    { id       = { type = 30600 id = 7 }
      name     = "3. Divisione di Fanteria"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
    division =
    { id       = { type = 30600 id = 8 }
      name     = "4. Felddivisionen"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30600 id = 9 }
      name     = "2. Div. de Infanterie de Montagne"
      strength = 30
      type     = bergsjaeger
    }
  }
  # ###############################
  # ###############################
  landunit =
  { id       = { type = 30600 id = 10 }
    location = 372
    name     = "IV Armeekorps"
    division =
    { id       = { type = 30600 id = 11 }
      name     = "5. Division d' Infanterie"
      strength = 100
      type     = infantry
      extra    = engineer
    }
    division =
    { id       = { type = 30600 id = 12 }
      name     = "6. Divisione di Fanteria"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 30600 id = 13 }
      name     = "3. Divisione di Alpinisti"
      strength = 30
      type     = bergsjaeger
    }
  }
  airunit =
  { id       = { type = 30600 id = 14 }
    location = 532
    base     = 532
    name     = "Heeren Luftwaffe Abteilung 1"
    division =
    { id       = { type = 30600 id = 15 }
      name     = "Taktikkampfgeschwader 1"
      strength = 40
      type     = tactical_bomber
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 30600 id = 16 } 
		name = "" 
		progress = 0.0000 
		location = 532 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = march 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1676 
		days_for_first = 215 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 30600 id = 17 } 
		name = "" 
		progress = 0.0000 
		location = 533 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = october 
			day = 27 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1405 
		days_for_first = 129 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 30600 id = 18 } 
		name = "" 
		progress = 0.0000 
		location = 530 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = october 
			day = 27 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1405 
		days_for_first = 129 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 30600 id = 19 } 
		name = "" 
		progress = 0.0000 
		location = 372 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = august 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1676 
		days_for_first = 215 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
