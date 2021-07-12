
##############################
# Country definition for DEN #
##############################

province =
{ id         = 1
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # Reykjavik
province =
{ id         = 292
  anti_air   = 1
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 4 current_size = 4 }
}              # Aalborg
province =
{ id         = 294
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}              # Copenhagen

#####################
# Country main data #
#####################

country =
{ tag                    = DEN
  manpower               = 2.8 # 3 - building queue
  capital                = 294
  transports             = 60
  escorts                = 10
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.4000 
  supply = 0.0667 
  production = 0.5333 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = IRE value = 2 }
	relation = { tag = FIN value = 75 }
    relation = { tag = GER value = 25 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = SWE value = 75 }
    relation = { tag = USA value = 75 }
	relation = { tag = CZE value = 8 }
	relation = { tag = POL value = -12 }
	relation = { tag = CAN value = 15 }
	relation = { tag = SAF value = 10 }
	relation = { tag = ROM value = 1 }
	relation = { tag = ALB value = -8 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 1 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 2 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  nationalprovinces      = { 1 2 91 92 292 293 294 295 800 }
  ownedprovinces         = { 1 2 91 92 292 293 294 295 800 }
  controlledprovinces    = { 1 2 91 92 292 293 294 295 800 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 5470 6010 6020 3010 3070
                             3130 3400 3410 8020 8040 8050
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    free_market       = 6
    freedom           = 8
    professional_army = 3
    defense_lobby     = 1
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 16001 }
  headofgovernment       = { type = 9 id = 16002 }
  foreignminister        = { type = 9 id = 16003 }
  armamentminister       = { type = 9 id = 16004 }
  ministerofsecurity     = { type = 9 id = 16005 }
  ministerofintelligence = { type = 9 id = 16006 }
  chiefofstaff           = { type = 9 id = 16007 }
  chiefofarmy            = { type = 9 id = 16008 }
  chiefofnavy            = { type = 9 id = 16009 }
  chiefofair             = { type = 9 id = 16010 }
  landunit =
  { location = 92
    name     = "Den Danske Hær"
    id       = { type = 27000 id = 40 }
    division =
    { id       = { type = 27000 id = 41 }
      name     = "1. Jydske Division"
      type     = infantry
      model    = 0
      strength = 15
    }
  }
  navalunit =
  { name     = "Den Danske Flåde"
    id       = { type = 27000 id = 42 }
    location = 294
    base     = 294
    division =
    { id    = { type = 27000 id = 43 }
      name  = "KDM Niels Juel"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 27000 id = 44 }
      name  = "KDM Peder Skram"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 27000 id = 45 }
      name  = "1. Ubåds Flotille"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 27000 id = 46 }
      name  = "2. Ubåds Flotille"
      type  = submarine
      model = 0
    }
  } 
	province_development = { 
		id = { type = 27000 id = 47 } 
		name = "" 
		progress = 0.0000 
		location = 294 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = january 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1880 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		speed_step = 2 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27000 id = 48 } 
		name = "" 
		progress = 0.0000 
		location = 92 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = march 
			day = 16 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1880 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
