// Code generated by the Lingua Franca compiler from:
// file://h/dk/f/ar4013si-s/Inbyggd systems/Lab-2/vm_code.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/h/dk/f/ar4013si-s/Inbyggd systems/Lab-2/src-gen/vm_code"

#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
int main(int argc, const char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
const char* _lf_default_argv[] = { "dummy", "-k", "true" };
void _lf_set_default_command_line_options() {
        default_argc = 3;
        default_argv = _lf_default_argv;
}
#include "_input.h"
#include "_output.h"
#include "_machine.h"
#include "_vm_code_main.h"
typedef enum {
    vm_code_main,
    _num_enclaves
} _enclave_id;
// The global array of environments associated with each enclave
environment_t envs[_num_enclaves];
// 'Create' and initialize the environments in the program
void _lf_create_environments() {
    environment_init(&envs[vm_code_main],"vm_code",vm_code_main,_lf_number_of_workers,0,1,0,0,6,0,0,NULL);
}
// Update the pointer argument to point to the beginning of the environment array
// and return the size of that array
int _lf_get_environments(environment_t ** return_envs) {
   (*return_envs) = (environment_t *) envs;
   return _num_enclaves;
}
// No watchdogs found.
typedef void watchdog_t;
watchdog_t* _lf_watchdogs = NULL;
int _lf_watchdog_count = 0;
void _lf_initialize_trigger_objects() {
    int startup_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(startup_reaction_count);
    int shutdown_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(shutdown_reaction_count);
    int reset_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(reset_reaction_count);
    int timer_triggers_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(timer_triggers_count);
    int modal_state_reset_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_state_reset_count);
    int modal_reactor_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_reactor_count);
    int bank_index;
    SUPPRESS_UNUSED_WARNING(bank_index);
    int watchdog_number = 0;
    SUPPRESS_UNUSED_WARNING(watchdog_number);
    _vm_code_main_main_self_t* vm_code_main_self[1];
    SUPPRESS_UNUSED_WARNING(vm_code_main_self);
    _input_self_t* vm_code_in_self[1];
    SUPPRESS_UNUSED_WARNING(vm_code_in_self);
    _output_self_t* vm_code_out_self[1];
    SUPPRESS_UNUSED_WARNING(vm_code_out_self);
    _machine_self_t* vm_code_machine_self[1];
    SUPPRESS_UNUSED_WARNING(vm_code_machine_self);
    // ***** Start initializing vm_code of class vm_code
    vm_code_main_self[0] = new__vm_code_main();
    vm_code_main_self[0]->base.environment = &envs[vm_code_main];
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
    {
        _vm_code_main_main_self_t *self = vm_code_main_self[0];
        // ***** Start initializing vm_code.in of class Input
        vm_code_in_self[0] = new__input();
        vm_code_in_self[0]->base.environment = &envs[vm_code_main];
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        vm_code_in_self[0]->_lf_cancel_width = -2;
        // width of -2 indicates that it is not a multiport.
        vm_code_in_self[0]->_lf_sel_width = -2;
        // width of -2 indicates that it is not a multiport.
        vm_code_in_self[0]->_lf_coin_width = -2;
        envs[vm_code_main].startup_reactions[startup_reaction_count[vm_code_main]++] = &vm_code_in_self[0]->_lf__reaction_0;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
        { // For scoping
            static lf_thread_t _initial = 0;
            vm_code_in_self[0]->thread_id = _initial;
        } // End scoping.
        // Initializing action vm_code.in.a
        vm_code_in_self[0]->_lf__a.offset = 0;
        vm_code_in_self[0]->_lf__a.period = -1;
        vm_code_in_self[0]->_lf__a.last_tag = NEVER_TAG;
        vm_code_in_self[0]->_lf__a.mode = NULL;
        _lf_initialize_template((token_template_t*)
                &(vm_code_in_self[0]->_lf__a),
        sizeof(int));
        vm_code_in_self[0]->_lf__a.status = absent;
        vm_code_in_self[0]->_lf__reaction_0.deadline = NEVER;
        vm_code_in_self[0]->_lf__reaction_1.deadline = NEVER;
        //***** End initializing vm_code.in
    }
    {
        _vm_code_main_main_self_t *self = vm_code_main_self[0];
        // ***** Start initializing vm_code.out of class Output
        vm_code_out_self[0] = new__output();
        vm_code_out_self[0]->base.environment = &envs[vm_code_main];
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        vm_code_out_self[0]->_lf_change_width = -2;
        // width of -2 indicates that it is not a multiport.
        vm_code_out_self[0]->_lf_beverage_width = -2;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        vm_code_out_self[0]->_lf__reaction_0.deadline = NEVER;
        vm_code_out_self[0]->_lf__reaction_1.deadline = NEVER;
        //***** End initializing vm_code.out
    }
    {
        _vm_code_main_main_self_t *self = vm_code_main_self[0];
        // ***** Start initializing vm_code.machine of class Machine
        vm_code_machine_self[0] = new__machine();
        vm_code_machine_self[0]->base.environment = &envs[vm_code_main];
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        static int vm_code_machine_stock[] = {2,2,2};
        vm_code_machine_self[0]->stock = vm_code_machine_stock;
        // width of -2 indicates that it is not a multiport.
        vm_code_machine_self[0]->_lf_coin_out_width = -2;
        // width of -2 indicates that it is not a multiport.
        vm_code_machine_self[0]->_lf_bev_out_width = -2;
        // width of -2 indicates that it is not a multiport.
        vm_code_machine_self[0]->_lf_cancel_in_width = -2;
        // width of -2 indicates that it is not a multiport.
        vm_code_machine_self[0]->_lf_sel_in_width = -2;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        vm_code_machine_self[0]->_lf__reaction_0.deadline = NEVER;
        vm_code_machine_self[0]->_lf__reaction_1.deadline = NEVER;
        //***** End initializing vm_code.machine
    }
    //***** End initializing vm_code
    // **** Start deferred initialize for vm_code
    {
    
    
    
        // **** Start deferred initialize for vm_code.in
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of vm_code.in.
            vm_code_in_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 0 of vm_code.in
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_2 of vm_code.in.
            vm_code_in_self[0]->_lf__reaction_1.num_outputs = 3;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            vm_code_in_self[0]->_lf__reaction_1.triggers = (trigger_t***)_lf_allocate(
                    3, sizeof(trigger_t**),
                    &vm_code_in_self[0]->base.allocations);
            vm_code_in_self[0]->_lf__reaction_1.triggered_sizes = (int*)_lf_allocate(
                    3, sizeof(int),
                    &vm_code_in_self[0]->base.allocations);
            vm_code_in_self[0]->_lf__reaction_1.output_produced = (bool**)_lf_allocate(
                    3, sizeof(bool*),
                    &vm_code_in_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    vm_code_in_self[0]->_lf__reaction_1.output_produced[count++] = &vm_code_in_self[0]->_lf_cancel.is_present;
                }
                {
                    vm_code_in_self[0]->_lf__reaction_1.output_produced[count++] = &vm_code_in_self[0]->_lf_sel.is_present;
                }
                {
                    vm_code_in_self[0]->_lf__reaction_1.output_produced[count++] = &vm_code_in_self[0]->_lf_coin.is_present;
                }
            }
            
            // ** End initialization for reaction 1 of vm_code.in
        
        }
        // **** End of deferred initialize for vm_code.in
        // **** Start deferred initialize for vm_code.out
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of vm_code.out.
            vm_code_out_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 0 of vm_code.out
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_2 of vm_code.out.
            vm_code_out_self[0]->_lf__reaction_1.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 1 of vm_code.out
        
        }
        // **** End of deferred initialize for vm_code.out
        // **** Start deferred initialize for vm_code.machine
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of vm_code.machine.
            vm_code_machine_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            vm_code_machine_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &vm_code_machine_self[0]->base.allocations);
            vm_code_machine_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &vm_code_machine_self[0]->base.allocations);
            vm_code_machine_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &vm_code_machine_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    vm_code_machine_self[0]->_lf__reaction_0.output_produced[count++] = &vm_code_machine_self[0]->_lf_bev_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of vm_code.machine
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_2 of vm_code.machine.
            vm_code_machine_self[0]->_lf__reaction_1.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            vm_code_machine_self[0]->_lf__reaction_1.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &vm_code_machine_self[0]->base.allocations);
            vm_code_machine_self[0]->_lf__reaction_1.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &vm_code_machine_self[0]->base.allocations);
            vm_code_machine_self[0]->_lf__reaction_1.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &vm_code_machine_self[0]->base.allocations);
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
                {
                    vm_code_machine_self[0]->_lf__reaction_1.output_produced[count++] = &vm_code_machine_self[0]->_lf_coin_out.is_present;
                }
            }
            
            // ** End initialization for reaction 1 of vm_code.machine
        
        }
        // **** End of deferred initialize for vm_code.machine
    }
    // **** End of deferred initialize for vm_code
    // **** Start non-nested deferred initialize for vm_code
    {
    
    
    
        // **** Start non-nested deferred initialize for vm_code.in
        {
        
            // For reference counting, set num_destinations for port vm_code.in.cancel.
            // Iterate over range vm_code.in.cancel(0,1)->[vm_code.machine.cancel_in(0,1)].
            {
                int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                vm_code_in_self[src_runtime]->_lf_cancel._base.num_destinations = 1;
                vm_code_in_self[src_runtime]->_lf_cancel._base.source_reactor = (self_base_t*)vm_code_in_self[src_runtime];
            }
            // For reference counting, set num_destinations for port vm_code.in.sel.
            // Iterate over range vm_code.in.sel(0,1)->[vm_code.machine.sel_in(0,1)].
            {
                int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                vm_code_in_self[src_runtime]->_lf_sel._base.num_destinations = 1;
                vm_code_in_self[src_runtime]->_lf_sel._base.source_reactor = (self_base_t*)vm_code_in_self[src_runtime];
            }
            for (int index486184027c8990b = 0; index486184027c8990b < 1; index486184027c8990b++) { vm_code_in_self[0]->_lf_coin._base.source_reactor = (self_base_t*)vm_code_in_self[0]; }
            {
                int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
                // Iterate over range vm_code.in.cancel(0,1)->[vm_code.machine.cancel_in(0,1)].
                {
                    int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                    int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                    int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                    int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                    // Reaction 1 of vm_code.in triggers 1 downstream reactions
                    // through port vm_code.in.cancel.
                    vm_code_in_self[src_runtime]->_lf__reaction_1.triggered_sizes[triggers_index[src_runtime]] = 1;
                    // For reaction 1 of vm_code.in, allocate an
                    // array of trigger pointers for downstream reactions through port vm_code.in.cancel
                    trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                            1, sizeof(trigger_t*),
                            &vm_code_in_self[src_runtime]->base.allocations); 
                    vm_code_in_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime]++] = trigger_array;
                }
                // Iterate over range vm_code.in.sel(0,1)->[vm_code.machine.sel_in(0,1)].
                {
                    int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                    int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                    int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                    int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                    // Reaction 1 of vm_code.in triggers 1 downstream reactions
                    // through port vm_code.in.sel.
                    vm_code_in_self[src_runtime]->_lf__reaction_1.triggered_sizes[triggers_index[src_runtime]] = 1;
                    // For reaction 1 of vm_code.in, allocate an
                    // array of trigger pointers for downstream reactions through port vm_code.in.sel
                    trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                            1, sizeof(trigger_t*),
                            &vm_code_in_self[src_runtime]->base.allocations); 
                    vm_code_in_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime]++] = trigger_array;
                }
                for (int i = 0; i < 1; i++) triggers_index[i] = 0;
                // Iterate over ranges vm_code.in.cancel(0,1)->[vm_code.machine.cancel_in(0,1)] and vm_code.machine.cancel_in(0,1).
                {
                    int src_runtime = 0; // Runtime index.
                    SUPPRESS_UNUSED_WARNING(src_runtime);
                    int src_channel = 0; // Channel index.
                    SUPPRESS_UNUSED_WARNING(src_channel);
                    int src_bank = 0; // Bank index.
                    SUPPRESS_UNUSED_WARNING(src_bank);
                    // Iterate over range vm_code.machine.cancel_in(0,1).
                    {
                        int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                        int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                        int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                        // Point to destination port vm_code.machine.cancel_in's trigger struct.
                        vm_code_in_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime] + src_channel][0] = &vm_code_machine_self[dst_runtime]->_lf__cancel_in;
                    }
                }
                for (int i = 0; i < 1; i++) triggers_index[i] = 1;
                // Iterate over ranges vm_code.in.sel(0,1)->[vm_code.machine.sel_in(0,1)] and vm_code.machine.sel_in(0,1).
                {
                    int src_runtime = 0; // Runtime index.
                    SUPPRESS_UNUSED_WARNING(src_runtime);
                    int src_channel = 0; // Channel index.
                    SUPPRESS_UNUSED_WARNING(src_channel);
                    int src_bank = 0; // Bank index.
                    SUPPRESS_UNUSED_WARNING(src_bank);
                    // Iterate over range vm_code.machine.sel_in(0,1).
                    {
                        int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                        int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                        int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                        // Point to destination port vm_code.machine.sel_in's trigger struct.
                        vm_code_in_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime] + src_channel][0] = &vm_code_machine_self[dst_runtime]->_lf__sel_in;
                    }
                }
            }
        
        }
        // **** End of non-nested deferred initialize for vm_code.in
        // **** Start non-nested deferred initialize for vm_code.out
        {
        
        
        
        
        }
        // **** End of non-nested deferred initialize for vm_code.out
        // **** Start non-nested deferred initialize for vm_code.machine
        {
        
            // For reference counting, set num_destinations for port vm_code.machine.coin_out.
            // Iterate over range vm_code.machine.coin_out(0,1)->[vm_code.out.change(0,1)].
            {
                int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                vm_code_machine_self[src_runtime]->_lf_coin_out._base.num_destinations = 1;
                vm_code_machine_self[src_runtime]->_lf_coin_out._base.source_reactor = (self_base_t*)vm_code_machine_self[src_runtime];
            }
            // For reference counting, set num_destinations for port vm_code.machine.bev_out.
            // Iterate over range vm_code.machine.bev_out(0,1)->[vm_code.out.beverage(0,1)].
            {
                int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                vm_code_machine_self[src_runtime]->_lf_bev_out._base.num_destinations = 1;
                vm_code_machine_self[src_runtime]->_lf_bev_out._base.source_reactor = (self_base_t*)vm_code_machine_self[src_runtime];
            }
            {
                int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
                // Iterate over range vm_code.machine.bev_out(0,1)->[vm_code.out.beverage(0,1)].
                {
                    int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                    int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                    int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                    int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                    // Reaction 0 of vm_code.machine triggers 1 downstream reactions
                    // through port vm_code.machine.bev_out.
                    vm_code_machine_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
                    // For reaction 0 of vm_code.machine, allocate an
                    // array of trigger pointers for downstream reactions through port vm_code.machine.bev_out
                    trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                            1, sizeof(trigger_t*),
                            &vm_code_machine_self[src_runtime]->base.allocations); 
                    vm_code_machine_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
                }
                for (int i = 0; i < 1; i++) triggers_index[i] = 0;
                // Iterate over ranges vm_code.machine.bev_out(0,1)->[vm_code.out.beverage(0,1)] and vm_code.out.beverage(0,1).
                {
                    int src_runtime = 0; // Runtime index.
                    SUPPRESS_UNUSED_WARNING(src_runtime);
                    int src_channel = 0; // Channel index.
                    SUPPRESS_UNUSED_WARNING(src_channel);
                    int src_bank = 0; // Bank index.
                    SUPPRESS_UNUSED_WARNING(src_bank);
                    // Iterate over range vm_code.out.beverage(0,1).
                    {
                        int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                        int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                        int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                        // Point to destination port vm_code.out.beverage's trigger struct.
                        vm_code_machine_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &vm_code_out_self[dst_runtime]->_lf__beverage;
                    }
                }
            }
            {
                int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
                // Iterate over range vm_code.machine.coin_out(0,1)->[vm_code.out.change(0,1)].
                {
                    int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
                    int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
                    int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
                    int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                    // Reaction 1 of vm_code.machine triggers 1 downstream reactions
                    // through port vm_code.machine.coin_out.
                    vm_code_machine_self[src_runtime]->_lf__reaction_1.triggered_sizes[triggers_index[src_runtime]] = 1;
                    // For reaction 1 of vm_code.machine, allocate an
                    // array of trigger pointers for downstream reactions through port vm_code.machine.coin_out
                    trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                            1, sizeof(trigger_t*),
                            &vm_code_machine_self[src_runtime]->base.allocations); 
                    vm_code_machine_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime]++] = trigger_array;
                }
                for (int i = 0; i < 1; i++) triggers_index[i] = 0;
                // Iterate over ranges vm_code.machine.coin_out(0,1)->[vm_code.out.change(0,1)] and vm_code.out.change(0,1).
                {
                    int src_runtime = 0; // Runtime index.
                    SUPPRESS_UNUSED_WARNING(src_runtime);
                    int src_channel = 0; // Channel index.
                    SUPPRESS_UNUSED_WARNING(src_channel);
                    int src_bank = 0; // Bank index.
                    SUPPRESS_UNUSED_WARNING(src_bank);
                    // Iterate over range vm_code.out.change(0,1).
                    {
                        int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                        int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                        int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                        // Point to destination port vm_code.out.change's trigger struct.
                        vm_code_machine_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime] + src_channel][0] = &vm_code_out_self[dst_runtime]->_lf__change;
                    }
                }
            }
        
        }
        // **** End of non-nested deferred initialize for vm_code.machine
    }
    // **** End of non-nested deferred initialize for vm_code
    // Connect inputs and outputs for reactor vm_code.
    // Connect inputs and outputs for reactor vm_code.in.
    // Connect vm_code.in.cancel(0,1)->[vm_code.machine.cancel_in(0,1)] to port vm_code.machine.cancel_in(0,1)
    // Iterate over ranges vm_code.in.cancel(0,1)->[vm_code.machine.cancel_in(0,1)] and vm_code.machine.cancel_in(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range vm_code.machine.cancel_in(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            vm_code_machine_self[dst_runtime]->_lf_cancel_in = (_machine_cancel_in_t*)&vm_code_in_self[src_runtime]->_lf_cancel;
        }
    }
    // Connect vm_code.in.sel(0,1)->[vm_code.machine.sel_in(0,1)] to port vm_code.machine.sel_in(0,1)
    // Iterate over ranges vm_code.in.sel(0,1)->[vm_code.machine.sel_in(0,1)] and vm_code.machine.sel_in(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range vm_code.machine.sel_in(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            vm_code_machine_self[dst_runtime]->_lf_sel_in = (_machine_sel_in_t*)&vm_code_in_self[src_runtime]->_lf_sel;
        }
    }
    
    // Connect inputs and outputs for reactor vm_code.out.
    // Connect inputs and outputs for reactor vm_code.machine.
    // Connect vm_code.machine.coin_out(0,1)->[vm_code.out.change(0,1)] to port vm_code.out.change(0,1)
    // Iterate over ranges vm_code.machine.coin_out(0,1)->[vm_code.out.change(0,1)] and vm_code.out.change(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range vm_code.out.change(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            vm_code_out_self[dst_runtime]->_lf_change = (_output_change_t*)&vm_code_machine_self[src_runtime]->_lf_coin_out;
        }
    }
    // Connect vm_code.machine.bev_out(0,1)->[vm_code.out.beverage(0,1)] to port vm_code.out.beverage(0,1)
    // Iterate over ranges vm_code.machine.bev_out(0,1)->[vm_code.out.beverage(0,1)] and vm_code.out.beverage(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range vm_code.out.beverage(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            vm_code_out_self[dst_runtime]->_lf_beverage = (_output_beverage_t*)&vm_code_machine_self[src_runtime]->_lf_bev_out;
        }
    }
    {
        {
            // Add action vm_code.in.a to array of is_present fields.
            envs[vm_code_main].is_present_fields[0] 
                    = &vm_code_in_self[0]->_lf_a.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add action vm_code.in.a to array of intended_tag fields.
            envs[vm_code_main]._lf_intended_tag_fields[0] 
                    = &vm_code_in_self[0]->_lf_a.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
        }
    }
    {
    }
    {
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port vm_code.in.cancel to array of is_present fields.
            envs[vm_code_main].is_present_fields[1 + count] = &vm_code_in_self[0]->_lf_cancel.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port vm_code.in.cancel to array of intended_tag fields.
            envs[vm_code_main]._lf_intended_tag_fields[1 + count] = &vm_code_in_self[0]->_lf_cancel.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
            // Add port vm_code.in.sel to array of is_present fields.
            envs[vm_code_main].is_present_fields[1 + count] = &vm_code_in_self[0]->_lf_sel.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port vm_code.in.sel to array of intended_tag fields.
            envs[vm_code_main]._lf_intended_tag_fields[1 + count] = &vm_code_in_self[0]->_lf_sel.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
            // Add port vm_code.in.coin to array of is_present fields.
            envs[vm_code_main].is_present_fields[1 + count] = &vm_code_in_self[0]->_lf_coin.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port vm_code.in.coin to array of intended_tag fields.
            envs[vm_code_main]._lf_intended_tag_fields[1 + count] = &vm_code_in_self[0]->_lf_coin.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            // Add port vm_code.machine.coin_out to array of is_present fields.
            envs[vm_code_main].is_present_fields[4 + count] = &vm_code_machine_self[0]->_lf_coin_out.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port vm_code.machine.coin_out to array of intended_tag fields.
            envs[vm_code_main]._lf_intended_tag_fields[4 + count] = &vm_code_machine_self[0]->_lf_coin_out.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
            // Add port vm_code.machine.bev_out to array of is_present fields.
            envs[vm_code_main].is_present_fields[4 + count] = &vm_code_machine_self[0]->_lf_bev_out.is_present;
            #ifdef FEDERATED_DECENTRALIZED
            // Add port vm_code.machine.bev_out to array of intended_tag fields.
            envs[vm_code_main]._lf_intended_tag_fields[4 + count] = &vm_code_machine_self[0]->_lf_bev_out.intended_tag;
            #endif // FEDERATED_DECENTRALIZED
            count++;
        }
    }
    
    // Set reaction priorities for ReactorInstance vm_code
    {
    
        // Set reaction priorities for ReactorInstance vm_code.in
        {
            vm_code_in_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            vm_code_in_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
            vm_code_in_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            vm_code_in_self[0]->_lf__reaction_1.index = 0xffffffffffff0001LL;
        }
    
    
        // Set reaction priorities for ReactorInstance vm_code.out
        {
            vm_code_out_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 3 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            vm_code_out_self[0]->_lf__reaction_0.index = 0xffffffffffff0003LL;
            vm_code_out_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 4 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            vm_code_out_self[0]->_lf__reaction_1.index = 0xffffffffffff0004LL;
        }
    
    
        // Set reaction priorities for ReactorInstance vm_code.machine
        {
            vm_code_machine_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            vm_code_machine_self[0]->_lf__reaction_0.index = 0xffffffffffff0002LL;
            vm_code_machine_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 3 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            vm_code_machine_self[0]->_lf__reaction_1.index = 0xffffffffffff0003LL;
        }
    
    }
    
    // Initialize the scheduler
    size_t num_reactions_per_level[5] = 
        {1, 1, 1, 2, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 5};
    lf_sched_init(
        &envs[vm_code_main],
        envs[vm_code_main].num_workers,
        &sched_params
    );
    #ifdef EXECUTABLE_PREAMBLE
    _lf_executable_preamble(&envs[0]);
    #endif
    #ifdef FEDERATED
    initialize_triggers_for_federate();
    #endif // FEDERATED
}
void logical_tag_complete(tag_t tag_to_send) {
#ifdef FEDERATED_CENTRALIZED
        lf_latest_tag_complete(tag_to_send);
#endif // FEDERATED_CENTRALIZED

}
#ifndef FEDERATED
void terminate_execution(environment_t* env) {}
#endif