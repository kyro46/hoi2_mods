
##############################
# Country definition for TAN #
##############################

country =
{ tag                    = TAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.1610 
  supply = 0.0390 
  production = 0.8000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1418
  manpower               = 0.9 # 1 - building queue
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1418 }
  ownedprovinces         = { 1418 }
  controlledprovinces    = { 1418 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  blueprints             = { 1020 6210 6300 2300 2310 }
  diplomacy =
  { relation = { tag = MON value = 200 }
    relation = { tag = SIK value = 125 }
    relation = { tag = SOV value = 200 }
    relation = { tag = TAN value = 50 }
  }
  headofstate            = { type = 9 id = 71001 }
  headofgovernment       = { type = 9 id = 71002 }
  foreignminister        = { type = 9 id = 71003 }
  armamentminister       = { type = 9 id = 71004 }
  ministerofsecurity     = { type = 9 id = 71005 }
  ministerofintelligence = { type = 9 id = 71006 }
  chiefofstaff           = { type = 9 id = 71007 }
  chiefofarmy            = { type = 9 id = 71008 }
  chiefofnavy            = { type = 9 id = 71009 }
  chiefofair             = { type = 9 id = 71010 }
  landunit =
  { location = 1418
    id       = { type = 31600 id = 1 }
    name     = "1ya Tunska Armiya"
    division =
    { id       = { type = 31600 id = 2 }
      name     = "1. Tuvanska Strelkovaya Diviziya"
      type     = infantry
      strength = 100
    }
  } 
	province_development = { 
		id = { type = 31600 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 1418 
		cost = 2.0000 
		date = { 
			year = 1951 
			month = january 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 3067 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
