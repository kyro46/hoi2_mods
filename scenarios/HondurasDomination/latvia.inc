
##############################
# Country definition for LAT #
##############################

province =
{ id         = 197
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}              # Riga

#####################
# Country main data #
#####################

country =
{ tag                    = LAT
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 197
  manpower               = 19.7 # 20 - building queue
  consumer = 0.2222 
  supply = 0.0888 
  production = 0.6890 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  transports             = 15
  escorts                = 3
  diplomacy =
  { relation = { tag = ENG value = 65 }
    relation =
    { tag        = EST
      value      = 150
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = FIN value = 90 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation = { tag = JAP value = 4 }
	relation =
    { tag        = LIT
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = POL value = 75 }
    relation = { tag = SOV value = -30 }
	relation = { tag = POR value = 2 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "EST" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  nationalprovinces      = { 197 198 202 203 204 205 }
  ownedprovinces         = { 197 198 202 203 204 205 }
  controlledprovinces    = { 197 198 202 203 204 205 }
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 3400 8040 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 27001 }
  headofgovernment       = { type = 9 id = 27002 }
  foreignminister        = { type = 9 id = 27003 }
  armamentminister       = { type = 9 id = 27004 }
  ministerofsecurity     = { type = 9 id = 27005 }
  ministerofintelligence = { type = 9 id = 27006 }
  chiefofstaff           = { type = 9 id = 27007 }
  chiefofarmy            = { type = 9 id = 27008 }
  chiefofnavy            = { type = 9 id = 27009 }
  chiefofair             = { type = 9 id = 27010 }
  landunit =
  { id       = { type = 24500 id = 1 }
    location = 197
    name     = "Latvijas Armija"
    division =
    { id       = { type = 24500 id = 2 }
      name     = "Kurzemes Divizija"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 24500 id = 3 }
      name     = "Vidzemes Divizija"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 24500 id = 4 }
      name     = "Zemgales Divizija"
      extra    = artillery
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 24500 id = 5 }
      name     = "Latgales Divizija"
      type     = infantry
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 24500 id = 6 }
    location = 197
    base     = 197
    name     = "Latvijas Juras Speki"
    division =
    { id       = { type = 24500 id = 7 }
      name     = "1. Zemudens flotile"
      type     = submarine
      model    = 0
      strength = 40
    }
  } 
	province_development = { 
		id = { type = 24500 id = 8 } 
		name = "" 
		progress = 0.0000 
		location = 197 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = june 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2220 
		days_for_first = 142 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 24500 id = 9 } 
		name = "" 
		progress = 0.0000 
		location = 202 
		cost = 2.0000 
		date = { 
			year = 1938 
			month = march 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 782 
		days_for_first = 114 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 24500 id = 10 } 
		name = "" 
		progress = 0.0000 
		location = 204 
		cost = 2.0000 
		date = { 
			year = 1937 
			month = june 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 782 
		days_for_first = 142 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
