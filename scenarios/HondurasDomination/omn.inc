
##############################
# Country definition for OMN #
##############################

province =
{ id         = 1819
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Mascate

#####################
# Country main data #
#####################

country =
{ tag                    = OMN
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  consumer = 0.1940 
  supply = 0.0060 
  production = 0.8000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1819
  manpower               = 4.9 # 5 - building queue
  transports             = 12
  escorts                = 2
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 2
    interventionism   = 3
  }
  nationalprovinces      = { 1819 }
  ownedprovinces         = { 1819 }
  controlledprovinces    = { 1819 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  blueprints             = { 1020 5050 6010 6030 2300 }
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 92001 }
  headofgovernment       = { type = 9 id = 92002 }
  foreignminister        = { type = 9 id = 92003 }
  armamentminister       = { type = 9 id = 92004 }
  ministerofsecurity     = { type = 9 id = 92005 }
  ministerofintelligence = { type = 9 id = 92006 }
  chiefofstaff           = { type = 9 id = 92007 }
  chiefofarmy            = { type = 9 id = 92008 }
  chiefofnavy            = { type = 9 id = 92009 }
  chiefofair             = { type = 9 id = 92010 }
  landunit =
  { id       = { type = 11114 id = 1 }
    name     = "Royal Omani Army"
    location = 1819
    division =
    { id       = { type = 11114 id = 2 }
      name     = "Royal Omani Army"
      type     = cavalry
      strength = 15
    }
  } 
	province_development = { 
		id = { type = 11114 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 1819 
		cost = 2.0000 
		date = { 
			year = 1950 
			month = june 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2938 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
