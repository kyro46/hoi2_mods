
##############################
# Country definition for SAU #
##############################

province =
{ id         = 1804
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Medina

#####################
# Country main data #
#####################

country =
{ tag                    = SAU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2066 
  supply = 0.0600 
  production = 0.7534 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1807
  manpower               = 26.8 # 27 - building queue
  transports             = 12
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 1821 1818 1809 1808 1807 1805 1804 }
  ownedprovinces         = { 1821 1818 1809 1808 1807 1805 1804 }
  controlledprovinces    = { 1821 1818 1809 1808 1807 1805 1804 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = AST value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 10 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }
  headofstate            = { type = 9 id = 63001 }
  headofgovernment       = { type = 9 id = 63002 }
  foreignminister        = { type = 9 id = 63003 }
  armamentminister       = { type = 9 id = 63004 }
  ministerofsecurity     = { type = 9 id = 63005 }
  ministerofintelligence = { type = 9 id = 63006 }
  chiefofstaff           = { type = 9 id = 63007 }
  chiefofarmy            = { type = 9 id = 63008 }
  chiefofnavy            = { type = 9 id = 63009 }
  chiefofair             = { type = 9 id = 63010 }
  landunit =
  { location = 1807
    name     = "Royal Saudi Army"
    id       = { type = 22600 id = 1 }
    division =
    { id   = { type = 22600 id = 2 }
      name = "1. Royal Saudi Inf.Div."
      type = infantry
    }
    division =
    { id   = { type = 22600 id = 3 }
      name = "Royal Lifeguard"
      type = militia
    }
    division =
    { id   = { type = 22600 id = 4 }
      name = "Royal Saudi Cav. 'Medina'"
      type = cavalry
    }
  } 
	province_development = { 
		id = { type = 22600 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 1807 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = october 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 36 
		done = 0 
		days = 844 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22600 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 1821 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = july 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2926 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
