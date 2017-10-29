
##############################
# Country definition for NEP #
##############################

country =
{ tag                    = NEP
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  consumer = 0.3286 
  supply = 0.1000 
  production = 0.5714 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1473
  manpower               = 6.9 # 7 - building queue
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 9
    defense_lobby     = 2
    interventionism   = 2
  }
  nationalprovinces      = { 1473 }
  ownedprovinces         = { 1473 }
  controlledprovinces    = { 1473 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 75001 }
  headofgovernment       = { type = 9 id = 75002 }
  foreignminister        = { type = 9 id = 75003 }
  armamentminister       = { type = 9 id = 75004 }
  ministerofsecurity     = { type = 9 id = 75005 }
  ministerofintelligence = { type = 9 id = 75006 }
  chiefofstaff           = { type = 9 id = 75007 }
  chiefofarmy            = { type = 9 id = 75008 }
  chiefofnavy            = { type = 9 id = 75009 }
  chiefofair             = { type = 9 id = 75010 }
  landunit =
  { location = 1473
    name     = "Royal Nepalese Army"
    id       = { type = 31500 id = 1 }
    division =
    { id   = { type = 31500 id = 2 }
      name = "Royal Nepalese Lifeguard Div."
      type = infantry
    }
    division =
    { id   = { type = 31500 id = 3 }
      name = "Royal Household Division"
      type = infantry
    }
  } 
	province_development = { 
		id = { type = 31500 id = 4 } 
		name = "" 
		progress = 0.0000 
		location = 1473 
		cost = 2.0000 
		date = { 
			year = 1949 
			month = january 
			day = 12 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2654 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
