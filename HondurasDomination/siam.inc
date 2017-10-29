
##############################
# Country definition for SIA #
##############################

province =
{ id         = 1345
  anti_air   = 2
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 4 current_size = 4 }
}              # Thom Buri

#####################
# Country main data #
#####################

country =
{ tag                    = SIA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.0000 
  supply = 0.0000 
  production = 1.0000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1343
  manpower               = 144.7 # 145 - building queue
  transports             = 40
  escorts                = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1339 1340 1341 }
  ownedprovinces         = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }
  controlledprovinces    = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1020 1190 1110 2450 2460 2510 5080 5090 4120 6210 6300 3010 3070 3400 8050 }
  diplomacy =
  { relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 75 }
    relation = { tag = MAN value = 75 }
	relation = { tag = POR value = 29 }
	relation = { tag = GER value = 3 }
	relation = { tag = ITA value = 4 }
	relation = { tag = USA value = -12 }
  }
  headofstate            = { type = 9 id = 62001 }
  headofgovernment       = { type = 9 id = 62002 }
  foreignminister        = { type = 9 id = 62003 }
  armamentminister       = { type = 9 id = 62004 }
  ministerofsecurity     = { type = 9 id = 62005 }
  ministerofintelligence = { type = 9 id = 62006 }
  chiefofstaff           = { type = 9 id = 62007 }
  chiefofarmy            = { type = 9 id = 62008 }
  chiefofnavy            = { type = 9 id = 62009 }
  chiefofair             = { type = 9 id = 62010 }
  landunit =
  { location = 1345
    name     = "Royal Thai Army"
    id       = { type = 23600 id = 1 }
    division =
    { id       = { type = 23600 id = 2 }
      name     = "1. Thai Infantry Div."
      type     = infantry
      strength = 90
    }
    division =
    { id       = { type = 23600 id = 3 }
      name     = "2. Thai Infantry Div."
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 1343
    name     = "Royal Thai Police Force"
    id       = { type = 23600 id = 4 }
    division =
    { id       = { type = 23600 id = 5 }
      name     = "1. Royal Thai Police Div."
      type     = garrison
      strength = 30
      extra    = police
    }
  }
  navalunit =
  { location = 1345
    base     = 1345
    name     = "Royal Thai Navy"
    id       = { type = 23600 id = 6 }
    division =
    { id    = { type = 23600 id = 7 }
      name  = "HTMS Sri Ayuthia"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23600 id = 8 }
      name  = "Phra Ruang Flotille"
      type  = destroyer
      model = 0
    }
  }
  airunit =
  { location = 1345
    base     = 1345
    name     = "Royal Thai Airforce"
    id       = { type = 23600 id = 9 }
    division =
    { id       = { type = 23600 id = 10 }
      name     = "1. RTAF Fighter Group"
      type     = interceptor
      model    = 0
      strength = 50
    }
    division =
    { id       = { type = 23600 id = 11 }
      name     = "1. RTAF Tactic Bomb Group"
      type     = tactical_bomber
      model    = 0
      strength = 44
    }
  } 
	province_development = { 
		id = { type = 23600 id = 12 } 
		name = "" 
		progress = 0.0000 
		location = 1343 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = november 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2704 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		speed_step = 2 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23600 id = 13 } 
		name = "" 
		progress = 0.0000 
		location = 1348 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = april 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2704 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23600 id = 14 } 
		name = "" 
		progress = 0.0000 
		location = 1347 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = april 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2704 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
