
##############################
# Country definition for EST #
##############################

province =
{ id         = 194
  anti_air   = 2
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
}              # Tallinn

#####################
# Country main data #
#####################

country =
{ tag                    = EST
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.3286 
  supply = 0.1000 
  production = 0.5714 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 9.9 # 10 - building queue
  capital                = 194
  transports             = 20
  escorts                = 3
  diplomacy =
  { relation = { tag = ENG value = 65 }
    relation = { tag = FIN value = 120 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation =
    { tag        = LAT
      value      = 150
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation =
    { tag        = LIT
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = POL value = 75 }
    relation = { tag = SOV value = -30 }
	relation = { tag = SCH value = -8 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  nationalprovinces      = { 193 194 195 196 199 }
  ownedprovinces         = { 193 194 195 196 199 }
  controlledprovinces    = { 193 194 195 196 199 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 3400 8040 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    free_market       = 5
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 26001 }
  headofgovernment       = { type = 9 id = 26002 }
  foreignminister        = { type = 9 id = 26003 }
  armamentminister       = { type = 9 id = 26004 }
  ministerofsecurity     = { type = 9 id = 26005 }
  ministerofintelligence = { type = 9 id = 26006 }
  chiefofstaff           = { type = 9 id = 26007 }
  chiefofarmy            = { type = 9 id = 26008 }
  chiefofnavy            = { type = 9 id = 26009 }
  chiefofair             = { type = 9 id = 26010 }
  # Estonian Army
  landunit =
  { id       = { type = 30000 id = 1 }
    location = 194
    name     = "1. Eesti Armee"
    division =
    { id       = { type = 30000 id = 2 }
      name     = "I Jalaväediviis"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 30000 id = 3 }
      name     = "II Jalaväediviis"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 30000 id = 4 }
      name     = "III Jalaväediviis"
      type     = infantry
      strength = 100
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 30000 id = 5 } 
		name = "" 
		progress = 0.0000 
		location = 194 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = august 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2337 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		}
}
