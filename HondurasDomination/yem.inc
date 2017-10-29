
##############################
# Country definition for YEM #
##############################

country =
{ tag                    = YEM
  #puppet                 = ENG
  #control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 10
  consumer = 0.3134 
  supply = 0.0200 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 4.9 # 5 - building queue
  capital                = 1812
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 1
  }
  nationalprovinces      = { 1812 1813 1814 }
  ownedprovinces         = { 1812 }
  controlledprovinces    = { 1812 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
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
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 93001 }
  headofgovernment       = { type = 9 id = 93002 }
  foreignminister        = { type = 9 id = 93003 }
  armamentminister       = { type = 9 id = 93004 }
  ministerofsecurity     = { type = 9 id = 93005 }
  ministerofintelligence = { type = 9 id = 93006 }
  chiefofstaff           = { type = 9 id = 93007 }
  chiefofarmy            = { type = 9 id = 93008 }
  chiefofnavy            = { type = 9 id = 93009 }
  chiefofair             = { type = 9 id = 93010 }
  landunit =
  { id       = { type = 16800 id = 1 }
    name     = "Royal Yemenite Army"
    location = 1812
    division =
    { id           = { type = 16800 id = 2 }
      name         = "Royal Division"
      type         = cavalry
      strength     = 15
      #max_strength = 15
    }
  } 
	province_development = { 
		id = { type = 16800 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 1812 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = january 
			day = 13 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 3067 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		}
}
