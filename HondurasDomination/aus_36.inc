
##############################
# Country definition for AUS #
##############################

province =
{ id       = 377
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Innsbruck
province = { id = 461 anti_air = 1 } # Klagenfurt
province =
{ id       = 463
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
}            # Vienna

#####################
# Country main data #
#####################

country =
{ tag                    = AUS
  # HACK to make sure that Germany gets the whole manpower pool, all units and resources on annex.
  # Unwanted side-effect: Will never accept peace with Germany.
  regular_id             = GER
  intrinsic_gov_type     = social_liberal
  manpower               = 64.6 # 65 - building queue
  capital                = 463
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2584 
  supply = 0.2000 
  production = 0.4166 
  reinforcement = 0.1250 
  upgrading = 0.0000 
  diplomacy =
  { relation = { tag = ENG value = 75 }
    relation = { tag = ALB value = 1 }
    relation = { tag = POR value = 10 }
	relation = { tag = FRA value = -10 }
    relation = { tag = JAP value = 4}
	relation = { tag = TUR value = 5}
	relation = { tag = GER value = 100 }
    relation =
    { tag        = HUN
      value      = 100
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = IRE value = 10 }
    relation = { tag = ITA value = 125 }
    relation = { tag = SCH value = 50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 4 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  nationalprovinces      = { 373 377 460 461 462 463 464 465 467 371 }
  ownedprovinces         = { 373 377 460 461 462 463 464 465 }
  controlledprovinces    = { 373 377 460 461 462 463 464 465 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  2150  2010  2020  2290  2300  2310  2450  2460  2510  1010  1190  1110  1310  9010  5010  5020  5080 
                             5090  5190  6010  6020  14000
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    free_market       = 8
    freedom           = 7
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 23001 }
  headofgovernment       = { type = 9 id = 23002 }
  foreignminister        = { type = 9 id = 23003 }
  armamentminister       = { type = 9 id = 23004 }
  ministerofsecurity     = { type = 9 id = 23005 }
  ministerofintelligence = { type = 9 id = 23006 }
  chiefofstaff           = { type = 9 id = 23007 }
  chiefofarmy            = { type = 9 id = 23008 }
  chiefofnavy            = { type = 9 id = 23009 }
  chiefofair             = { type = 9 id = 23010 }
  landunit =
  { id       = { type = 14000 id = 9000 }
    location = 463
    name     = "I. Korps"
    division =
    { id       = { type = 14000 id = 9015 }
      name     = "HQ des Generalstabs"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 14000 id = 9001 }
      name     = "1. Kavallerie-Division"
      type     = cavalry
      model    = 0
      strength = 70
    }
    division =
    { id       = { type = 14000 id = 9002 }
      name     = "1. Infanterie-Division"
      type     = infantry
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 14000 id = 9003 }
      name     = "2. Infanterie-Division"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 14000 id = 9004 }
      name     = "3. Infanterie-Division"
      type     = infantry
      extra    = artillery
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9005 }
    location = 463
    name     = "II. Korps"
    division =
    { id       = { type = 14000 id = 9006 }
      name     = "4. Infanterie-Division"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9007 }
    location = 463
    name     = "III. Korps"
    division =
    { id       = { type = 14000 id = 9009 }
      name     = "5. Infanterie-Division"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9008 }
    location = 463
    name     = "IV. Korps"
    division =
    { id       = { type = 14000 id = 9011 }
      name     = "6. Infanterie-Division"
      type     = infantry
      extra    = engineer
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9010 }
    location = 463
    name     = "V. Korps"
    division =
    { id       = { type = 14000 id = 9012 }
      name     = "7. Infanterie-Division"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9013 }
    location = 463
    name     = "VI. Korps"
    division =
    { id       = { type = 14000 id = 9014 }
      name     = "1. Alpenjäger-Division"
      type     = bergsjaeger
      strength = 30
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 14000 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 463 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = november 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 851 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14000 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 460 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = november 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 851 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14000 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 377 
		cost = 2.0000 
		date = { 
			year = 1949 
			month = august 
			day = 16 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1170 
		days_for_first = 250 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14000 id = 203 } 
		name = "" 
		progress = 0.0000 
		location = 465 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = september 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1649 
		days_for_first = 125 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
