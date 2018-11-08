#ifndef __FIRMWARE_SYMBOLS_H_S__
#define __FIRMWARE_SYMBOLS_H_S__
#if defined(FIRMWARE_3_55)
    #define TOC                                         0x330540
    #define copy_from_user_symbol                       0xF8C0
    #define copy_from_process_symbol                    0xF56C
    #define page_allocate_symbol                        0x5C6E8
    #define page_free_symbol                            0x5C14C
    #define page_export_to_proc_symbol                  0x5C884
    #define page_unexport_from_proc_symbol              0x5C040
    #define printf_symbol                               0x29285C
    #define sprintf_symbol                              0x4F900
    #define snprintf_symbol                             0x4F86C
    #define strcmp_symbol                               0x4E630
	#define ppu_thread_join_symbol                      0x13E08
    #define create_user_thread2_symbol                  0x24DC4
    #define start_thread_symbol                         0x23A90
    #define run_thread_symbol                           0x232C0 /* temp name */
    #define register_thread_symbol                      0x28AC00
    #define allocate_user_stack_symbol                  0x28B3E8
    #define deallocate_user_stack_symbol                0x28B350
    #define prx_load_module_symbol                      0x86404
    #define prx_start_module_symbol                     0x85140
    #define prx_stop_module_symbol                      0x864A8
    #define prx_unload_module_symbol                    0x84E74
    #define extend_kstack_symbol                        0x6C338
    #define syscall_table_symbol                        0x346570
	#define process_rtoc_entry_1                        -0x77C0
#elif defined(FIRMWARE_4_21) //Ported by Joonie, Big thanks to @aldostools for his amazing tool and special thanks to Estwald who is the original creater of this mamba
    #define TOC                                         0x346390 //done
    #define copy_from_user_symbol                       0xFA78 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xF724 // bytes matched: 0x74  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x5FA48 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x5F4AC // bytes matched: 0x60  E9629C687C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
    #define page_export_to_proc_symbol                  0x5FBE4 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x5F3A0 // bytes matched: 0x80**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
    //#define printf_symbol                               
    #define sprintf_symbol                              0x4F930 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295B0F8C100C8F8610078
    #define snprintf_symbol                             0x4F89C // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x4E660 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x13FC0 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x24E38 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x23B04 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x23334 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x296A64 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x29724C // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x88168 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x86E34 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8820C // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x86B68 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
	#define extend_kstack_symbol                        0x6F748 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
    #define syscall_table_symbol                        0x35BCA8 // Found by Joonie
	#define process_rtoc_entry_1                        -0x7800 //found at 0x19F0F 88003FC0800163DE0005E87D0000
#elif defined(FIRMWARE_4_30)
    #define TOC						0x348200
    #define copy_from_user_symbol				0xFA74
    #define copy_from_process_symbol			0xF720
    #define page_allocate_symbol				0x5FB98
    #define page_free_symbol				0x5F5FC
    #define page_export_to_proc_symbol			0x5FD34
    #define page_unexport_from_proc_symbol			0x5F4F0
    #define printf_symbol					0x29FEEC
    #define sprintf_symbol					0x4F96C
    #define snprintf_symbol					0x4F8D8
    #define strcmp_symbol					0x4E69C
	#define ppu_thread_join_symbol				0x13FBC
    #define create_user_thread2_symbol			0x24E34
    #define start_thread_symbol				0x23B00
    #define run_thread_symbol				0x23330 /* temp name */
    #define register_thread_symbol				0x2981D4
    #define allocate_user_stack_symbol			0x2989BC
    #define deallocate_user_stack_symbol			0x298924
    #define prx_load_module_symbol				0x88294
    #define prx_start_module_symbol				0x86F60
    #define prx_stop_module_symbol				0x88338
    #define prx_unload_module_symbol			0x86C94
    #define extend_kstack_symbol				0x6F874
    #define syscall_table_symbol				0x35DBE0
	#define process_rtoc_entry_1				-0x7800
#elif defined(FIRMWARE_4_31) //Ported by Joonie, Big thanks to aldostools for his awesome getsymbol tool :)
    #define TOC                                         0x348210 //done
    #define copy_from_user_symbol                       0xFA78 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xF724 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x5FB9C // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x5F600 // bytes matched: 0x80  E9629C687C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
    #define page_export_to_proc_symbol                  0x5FD38 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x5F4F4 // bytes matched: 0x80  E8630030480110542BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
    //#define printf_symbol					
    #define sprintf_symbol                              0x4F970 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295B0F8C100C8F8610078
    #define snprintf_symbol                             0x4F8DC // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x4E6A0 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x13FC0 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x24E38 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x23B04 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x23334 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x2981E0 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x2989C8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x88298 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x86F64 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8833C // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x86C98 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
	#define extend_kstack_symbol                        0x6F878 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB6715E922A108
    #define syscall_table_symbol                        0x35DBE0 // Found by Joonie the same as CEX 4.30
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_40) // Ported by Joonie Big thanks to @Aldostools for his amazing getsymbol tool, special thanks to @Estwald who is the original creater of this payload
    #define TOC                                         0x3487D0 //done
    #define copy_from_user_symbol                       0xFA74 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xF720 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x5EAE4 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x5E548 // bytes matched: 0x80  E9629C607C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
    #define page_export_to_proc_symbol                  0x5EC80 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x5E43C // bytes matched: 0x80  E8630030480110542BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
    //#define printf_symbol					
    #define sprintf_symbol                              0x4E8B8 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
    #define snprintf_symbol                             0x4E824 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x4D5E8 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x14034 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x24EAC // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x23B78 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x233A8 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x2975E4 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x297DCC // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                          0x87230 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                         0x85EFC // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                          0x872D4 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                        0x85C30 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
	#define extend_kstack_symbol                        0x6E7C0 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB7841E922A100
    #define syscall_table_symbol                        0x35E260 // 4.40/4.41 The same.
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_41) // Ported by Joonie, Big thanks to @aldostools for his awesome getsymbol tool :) and @Estwald for his original port of mamba.
    #define TOC                                         0x3487E0 //done
    #define copy_from_user_symbol                       0xFA78 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xF724 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x5EAE8 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x5E54C // bytes matched: 0x80  E9629C607C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
    #define page_export_to_proc_symbol                  0x5EC84 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x5E440 // bytes matched: 0x80  E8630030480110542BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
    //#define printf_symbol					
    #define sprintf_symbol                              0x4E8BC // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
    #define snprintf_symbol                             0x4E828 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x4D5EC // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x14038 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x24EB0 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x23B7C // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x233AC // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x2975F0 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x297DD8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                          0x87234 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                         0x85F00 // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                          0x872D8 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                        0x85C34 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x6E7C4 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB7841E922A100
    #define syscall_table_symbol                        0x35E260 // Found by Joonie
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_46)
    #define TOC						0x348DF0
    #define copy_from_user_symbol				0xFA78
    #define copy_from_process_symbol			0xF724
    #define page_allocate_symbol				0x5EAE8
    #define page_free_symbol				0x5E54C
    #define page_export_to_proc_symbol			0x5EC84
    #define page_unexport_from_proc_symbol			0x5E440
    #define printf_symbol					0x2A0800
    #define sprintf_symbol					0x4E8BC
    #define snprintf_symbol					0x4E828
    #define strcmp_symbol					0x4D5EC
	#define ppu_thread_join_symbol				0x14038
    #define create_user_thread2_symbol			0x24EB0
    #define start_thread_symbol				0x23B7C
    #define run_thread_symbol				0x233AC /* temp name */
    #define register_thread_symbol				0x297B10
    #define allocate_user_stack_symbol			0x2982F8
    #define deallocate_user_stack_symbol			0x298260
    #define prx_load_module_symbol				0x87234
    #define prx_start_module_symbol				0x85F00
    #define prx_stop_module_symbol				0x872D8
    #define prx_unload_module_symbol			0x85C34
    #define extend_kstack_symbol				0x6E7C4
    #define syscall_table_symbol				0x35E860
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_53)
    #define TOC						0x34B2E0 //
    #define copy_from_user_symbol				0xFA78 //
    #define copy_from_process_symbol			0xF724 //
    #define page_allocate_symbol				0x5EAE8 //
    #define page_free_symbol				0x5E54C //
    #define page_export_to_proc_symbol			0x5EC84 //
    #define page_unexport_from_proc_symbol			0x5E440 //
    #define printf_symbol					0x278CE0 //
    #define sprintf_symbol					0x4E8BC //
    #define snprintf_symbol					0x4E828 //
    #define strcmp_symbol					0x4D5EC //
	#define ppu_thread_join_symbol				0x14038 //
    #define create_user_thread2_symbol			0x24EB0 //
    #define start_thread_symbol				0x23B7C //
    #define run_thread_symbol				0x233AC // /* temp name */
    #define register_thread_symbol				0x26FFF0 //
    #define allocate_user_stack_symbol			0x2707D8 //
    #define deallocate_user_stack_symbol			0x270740 //
    #define prx_load_module_symbol				0x87234 //
    #define prx_start_module_symbol				0x85F00 //
    #define prx_stop_module_symbol				0x872D8 //
    #define prx_unload_module_symbol			0x85C34 //
    #define extend_kstack_symbol				0x6E7C4 //
    #define syscall_table_symbol				0x35F300 //
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_55) 
    #define TOC						0x34E620 //
    #define copy_from_user_symbol				0xFA88 //
    #define copy_from_process_symbol			0xF734 //
    #define page_allocate_symbol				0x5FF24 // 0X143C+
    #define page_free_symbol				0x5F988 //
    #define page_export_to_proc_symbol			0x600C0 //
    #define page_unexport_from_proc_symbol			0x5F87C //
    #define printf_symbol					0x27A530 //
    #define sprintf_symbol					0x4EB00 //
    #define snprintf_symbol					0x4EA6C //
    #define strcmp_symbol					0x4D830 //
	#define ppu_thread_join_symbol				0x14048 //
    #define create_user_thread2_symbol			0x250F4 //
    #define start_thread_symbol				0x23DC0 //
    #define run_thread_symbol				0x235F0 // /* temp name */
    #define register_thread_symbol				0x27183C //
    #define allocate_user_stack_symbol			0x272024 //
    #define deallocate_user_stack_symbol			0x271F8C //CHECKED TILL HERE!REALLY2!
    #define prx_load_module_symbol				0x88680 //
    #define prx_start_module_symbol				0x8734C //
    #define prx_stop_module_symbol				0x88724 //
    #define prx_unload_module_symbol			0x87080 //
    #define extend_kstack_symbol				0x6FC00 //
    #define syscall_table_symbol				0x362680 //
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_50) //Ported by Joonie, Big thanks to @aldostools for his awesome Getsymbols tool, and also Thanks a lot to @Estwald who is the creator of this Mamba payload!!
    #define TOC                                         0x34B160 //done
    #define copy_from_user_symbol                       0xFA74 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xF720 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x5EAE4 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x5E548 // bytes matched: 0x80  E9629C607C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
    #define page_export_to_proc_symbol                  0x5EC80 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x5E43C // bytes matched: 0x80  E8630030480110542BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
    //#define printf_symbol					
    #define sprintf_symbol                              0x4E8B8 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
    #define snprintf_symbol                             0x4E824 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x4D5E8 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x14034 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x24EAC // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x23B78 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x233A8 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x26FE18 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x270600 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x87230 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x85EFC // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x872D4 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x85C30 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x6E7C0 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB7841E922A100
    #define syscall_table_symbol                        0x35F0D0 // Found by Joonie
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_60)
    #define TOC                                         0x34F950 //done
    #define copy_from_user_symbol                       0xFA84 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xF730 // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x60308 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x5FD6C // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
    #define page_export_to_proc_symbol                  0x604A4 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x5FC60 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
    //#define printf_symbol					
    #define sprintf_symbol                              0x4EA90 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
    #define snprintf_symbol                             0x4E9FC // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x4D7C0 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x13FD0 // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x2507C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x23D48 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x23578 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x2705D0 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x270DB8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x88B78 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x87844 // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x88C1C // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x87578 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x70018 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
	#define syscall_table_symbol                        0x363A18
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_65) // Ported by Habib, Joonie, Haxxxen and Aldostools
    #define TOC						0x34F960 //
    #define copy_from_user_symbol				0xFA88 //
    #define copy_from_process_symbol			0xF734 //
    #define page_allocate_symbol				0x6030C //
    #define page_free_symbol				0x5FD70 //
    #define page_export_to_proc_symbol			0x604A8 //
    #define page_unexport_from_proc_symbol			0x5FC64 //
    #define printf_symbol					0x27933C //
    #define sprintf_symbol					0x4EA94 //
    #define snprintf_symbol					0x4EA00 //
    #define strcmp_symbol					0x4D7C4 //
	#define ppu_thread_join_symbol				0x13FD4 //
    #define create_user_thread2_symbol			0x25080 //
    #define start_thread_symbol				0x23D4C //
    #define run_thread_symbol				0x2357C // /* temp name */
    #define register_thread_symbol				0x2705DC //
    #define allocate_user_stack_symbol			0x270DC4 //
    #define deallocate_user_stack_symbol			0x270D2C //
    #define prx_load_module_symbol				0x88B7C //
    #define prx_start_module_symbol				0x87848 //
    #define prx_stop_module_symbol				0x88C20 //
    #define prx_unload_module_symbol			0x8757C //
    #define extend_kstack_symbol				0x7001C //
    #define syscall_table_symbol				0x363A18 //
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_66) // Same as 4.65
    #define TOC						0x34F960 //
    #define copy_from_user_symbol				0xFA88 //
    #define copy_from_process_symbol			0xF734 //
    #define page_allocate_symbol				0x6030C //
    #define page_free_symbol				0x5FD70 //
    #define page_export_to_proc_symbol			0x604A8 //
    #define page_unexport_from_proc_symbol			0x5FC64 //
    #define printf_symbol					0x27933C //
    #define sprintf_symbol					0x4EA94 //
    #define snprintf_symbol					0x4EA00 //
    #define strcmp_symbol                                   0x4D7C4 // same as mamba 4.65
	#define ppu_thread_join_symbol				0x13FD4 //
    #define create_user_thread2_symbol			0x25080 //
    #define start_thread_symbol				0x23D4C //
    #define run_thread_symbol				0x2357C // 
    #define register_thread_symbol				0x2705DC //
    #define allocate_user_stack_symbol			0x270DC4 //
    #define deallocate_user_stack_symbol			0x270D2C //
    #define prx_load_module_symbol				0x88B7C //
    #define prx_start_module_symbol				0x87848 //
    #define prx_stop_module_symbol				0x88C20 //
    #define prx_unload_module_symbol			0x8757C //
    #define extend_kstack_symbol				0x7001C //
    #define syscall_table_symbol				0x363A18 //
	#define process_rtoc_entry_1						-0x7800
#elif defined(FIRMWARE_4_70) 
	#define TOC								0x34FB10 //done
	#define copy_from_user_symbol			0xFA84 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
	#define copy_from_process_symbol		0xF730 // bytes matched: 0x74  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
	#define page_allocate_symbol			0x60390 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
	#define page_free_symbol				0x5FDF4 // bytes matched: 0x80  E9629C987C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
	#define page_export_to_proc_symbol		0x6052C // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
	#define page_unexport_from_proc_symbol	0x5FCE8 // bytes matched: 0x80  E8630030480110882BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
	#define printf_symbol					0x270634 // bytes matched: 0x34****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
	#define sprintf_symbol					0x4EA90 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
	#define snprintf_symbol					0x4E9FC // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
	#define strcmp_symbol					0x4D7C0 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol			0x13FD0 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
	#define create_user_thread2_symbol		0x2507C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
	#define start_thread_symbol				0x23D48 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
	#define run_thread_symbol				0x23578 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
	#define register_thread_symbol			0x2678D4 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
	#define allocate_user_stack_symbol		0x2680BC // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
	#define deallocate_user_stack_symbol	0x268024 // bytes matched: 0x38  F821FF717C0802A6FBA10078F80100A0E80300307CBD2B78FBC100802FA00000
	#define prx_load_module_symbol			0x88C00 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
	#define prx_start_module_symbol			0x878CC // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
	#define prx_stop_module_symbol			0x88CA4 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
	#define prx_unload_module_symbol		0x87600 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
	#define extend_kstack_symbol			0x700A0 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
	#define syscall_table_symbol			0x363B60 //done
	#define process_rtoc_entry_1			-0x7800 //found at 0x1A153 88003FC0800163DE0005E87D0000
#elif defined(FIRMWARE_4_75)
	#define TOC								0x34FBB0 //done
	#define copy_from_user_symbol			0xFA88 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
	#define copy_from_process_symbol		0xF734 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
	#define page_allocate_symbol			0x60394 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
	#define page_free_symbol				0x5FDF8 // bytes matched: 0x80  E9629C987C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
	#define page_export_to_proc_symbol		0x60530 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
	#define page_unexport_from_proc_symbol	0x5FCEC // bytes matched: 0x80  E8630030480110882BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
	#define printf_symbol					0x2706AC // bytes matched: 0x34****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
	#define sprintf_symbol					0x4EA94 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
	#define snprintf_symbol					0x4EA00 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
	#define strcmp_symbol					0x4D7C4 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol			0x13FD4 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
	#define create_user_thread2_symbol		0x25080 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
	#define start_thread_symbol				0x23D4C // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
	#define run_thread_symbol				0x2357C // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
	#define register_thread_symbol			0x26794C // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
	#define allocate_user_stack_symbol		0x268134 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
	#define deallocate_user_stack_symbol	0x26809C // bytes matched: 0x38  F821FF717C0802A6FBA10078F80100A0E80300307CBD2B78FBC100802FA00000
	#define prx_load_module_symbol			0x88C04 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
	#define prx_start_module_symbol			0x878D0 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
	#define prx_stop_module_symbol			0x88CA8 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
	#define prx_unload_module_symbol		0x87604 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
	#define extend_kstack_symbol			0x700A4 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB6131E922A138
	#define syscall_table_symbol			0x363BE0 //done
	#define process_rtoc_entry_1			-0x7800 //found at 0x1A157 88003FC0800163DE0005E87D0000
#elif defined(FIRMWARE_4_76) || defined(FIRMWARE_4_78)
	#define TOC								0x34FBB0 //done
	#define copy_from_user_symbol			0xFA88 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
	#define copy_from_process_symbol		0xF734 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
	#define page_allocate_symbol			0x60394 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
	#define page_free_symbol				0x5FDF8 // bytes matched: 0x80  E9629C987C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
	#define page_export_to_proc_symbol		0x60530 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
	#define page_unexport_from_proc_symbol	0x5FCEC // bytes matched: 0x80  E8630030480110882BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
	#define printf_symbol					0x2706AC // bytes matched: 0x34****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
	#define sprintf_symbol					0x4EA94 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
	#define snprintf_symbol					0x4EA00 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
	#define strcmp_symbol					0x4D7C4 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol			0x13FD4 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
	#define create_user_thread2_symbol		0x25080 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
	#define start_thread_symbol				0x23D4C // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
	#define run_thread_symbol				0x2357C // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
	#define register_thread_symbol			0x26794C // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
	#define allocate_user_stack_symbol		0x268134 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
	#define deallocate_user_stack_symbol	0x26809C // bytes matched: 0x38  F821FF717C0802A6FBA10078F80100A0E80300307CBD2B78FBC100802FA00000
	#define prx_load_module_symbol			0x88C04 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
	#define prx_start_module_symbol			0x878D0 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
	#define prx_stop_module_symbol			0x88CA8 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
	#define prx_unload_module_symbol		0x87604 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
	#define extend_kstack_symbol			0x700A4 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB6131E922A138
	#define syscall_table_symbol			0x363BE0 //done
	#define process_rtoc_entry_1			-0x7800 //found at 0x1A157 88003FC0800163DE0005E87D0000
#elif defined(FIRMWARE_3_55DEX)  // Ported by Joonie, Big thanks to @aldostools for his amazing tool, special thanks to @Estwald
    #define TOC                                         0x34AC80 //done
    #define copy_from_user_symbol                       0xFF08 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xFBB4 // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x5FFD4 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x5FA38 // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
    #define page_export_to_proc_symbol                  0x60170 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x5F92C // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
	//#define printf_symbol					
	#define sprintf_symbol                              0x531C4 // bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
    #define snprintf_symbol                             0x53130 // bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x51EF4 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x14458 // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x26990 // bytes matched: 0x2C  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x254C8 // bytes matched: 0x58  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x24C8C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x2913EC // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x291BD4 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x8AA24 // bytes matched: 0x44  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x89760 // bytes matched: 0x58  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8AAC8 // bytes matched: 0x28  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x89494 // bytes matched: 0x28  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x6FDA4 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
    #define syscall_table_symbol                        0x361578 // Found by Joonie
	#define process_rtoc_entry_1						-0x7760 //found at 0x1B4FF 88A03FC0800163DE0005E87D0000				
#elif defined(FIRMWARE_4_21DEX)  // Ported by Joonie, Big thanks to @aldostools for his awesome getsymbol tool :)
    #define TOC                                         0x363E80 //done
    #define copy_from_user_symbol                       0x100C0 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xFD6C // bytes matched: 0x74  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x63360 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x62DC4 // bytes matched: 0x60  E9629D487C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
    #define page_export_to_proc_symbol                  0x634FC // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x62CB8 // bytes matched: 0x80**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
	#define printf_symbol								0x2A6828
	#define sprintf_symbol                              0x53220 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29690F8C100C8F8610078
    #define snprintf_symbol                             0x5318C // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x51F50 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x1463C // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x26A30 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x25568 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x24D2C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x29D2C8 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x29DAB0 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x8C7B4 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x8B480 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8C858 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x8B1B4 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
	#define extend_kstack_symbol                        0x731E0 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
    #define syscall_table_symbol                        0x37A1B0 // Found by Joonie
	#define process_rtoc_entry_1						-0x77A0
#elif defined(FIRMWARE_4_30DEX)  //Ported by Joonie @ Big Thanks to @aldostools for his awesome Getsymbol Tool :)
    #define TOC                                         0x365CA0 //done
    #define copy_from_user_symbol                       0x100BC // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xFD68 // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x634B0 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x62F14 // bytes matched: 0x80*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
    #define page_export_to_proc_symbol                  0x6364C // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x62E08 // bytes matched: 0x28  E8630030480113142BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
	//#define printf_symbol					
	#define sprintf_symbol                              0x5325C // bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
    #define snprintf_symbol                             0x531C8 // bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x51F8C // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x14638 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x26A2C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x25564 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x24D28 // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x29EA38 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x29F220 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x8C8E0 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x8B5AC // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8C984 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x8B2E0 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x7330C // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
    #define syscall_table_symbol                        0x37C068 //done
	#define process_rtoc_entry_1						-0x77A0
#elif defined(FIRMWARE_4_41DEX)  //Ported by Joonie, Bit thanks to @aldostools for his amazing getsymbol tool :)
    #define TOC                                         0x3665C0 //done
    #define copy_from_user_symbol                       0x100C0 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xFD6C // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x62400 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x61E64 // bytes matched: 0x80  E9629D407C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
    #define page_export_to_proc_symbol                  0x6259C // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x61D58 // bytes matched: 0x80  E8630030480113142BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
	//#define printf_symbol					
	#define sprintf_symbol                              0x521AC // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
    #define snprintf_symbol                             0x52118 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x50EDC // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x146B4 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x26AA8 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x255E0 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x24DA4 // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x29DE54 // Done
    #define allocate_user_stack_symbol                  0x29E63C // Done
    #define prx_load_module_symbol                      0x8B880 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x8A54C // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8B924 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x8A280 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x7225C // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB5AF1E922A1E0
    #define syscall_table_symbol                        0x37C9E8 // Found by Joonie
	#define process_rtoc_entry_1						-0x77A0 
#elif defined(FIRMWARE_4_46DEX) //Ported by @Joonie, @nathan_r32_69 Bit thanks to @aldostools for his amazing getsymbol tool :)
    #define TOC                                         0x366BD0 // Checked
    #define copy_from_user_symbol                       0x100C0  // Checked
    #define copy_from_process_symbol                    0xFD6C   // Checked
    #define page_allocate_symbol                        0x62400  // Checked
    #define page_free_symbol                            0x61E64  // Checked
    #define page_export_to_proc_symbol                  0x6259C  // Checked
    #define page_unexport_from_proc_symbol              0x61D58  // Checked
	//#define printf_symbol					
	#define sprintf_symbol                              0x521AC  // Checked
    #define snprintf_symbol                             0x52118  // Checked
    #define strcmp_symbol                               0x50EDC  // Checked
	#define ppu_thread_join_symbol                      0x146B4  // Checked
    #define create_user_thread2_symbol                  0x26AA8  // Checked
    #define start_thread_symbol                         0x255E0  // Checked
    #define run_thread_symbol                           0x24DA4  // Checked
    #define register_thread_symbol                      0x29E374 // Checked
    #define allocate_user_stack_symbol                  0x29EB5C // Checked
    #define prx_load_module_symbol                      0x8B880 // Checked
    #define prx_start_module_symbol                     0x8A54C // Checked
    #define prx_stop_module_symbol                      0x8B924 // Checked
    #define prx_unload_module_symbol                    0x8A280 // Checked
    #define extend_kstack_symbol                        0x7225C  // Checked
    #define syscall_table_symbol                        0x37CFE8 // Checked
	#define process_rtoc_entry_1						-0x77A0
#elif defined(FIRMWARE_4_50DEX)
    #define TOC						0x36EC40 //done
    #define copy_from_user_symbol				0x100BC //done
    #define copy_from_process_symbol			0xFD68 //done
    #define page_allocate_symbol				0x624B4 //done
    #define page_free_symbol				0x61F18 //done
    #define page_export_to_proc_symbol			0x62650 //done
    #define page_unexport_from_proc_symbol			0x61E0C //done
    #define printf_symbol					0x280E08 //done
    #define sprintf_symbol					0x52260 //done
    #define snprintf_symbol					0x521CC //done
    #define strcmp_symbol					0x50F90 //done
	#define ppu_thread_join_symbol				0x14768 //done
    #define create_user_thread2_symbol			0x26B5C //done
    #define start_thread_symbol				0x25694 //done
    #define run_thread_symbol				0x24E58 /* temp name */ //done
    #define register_thread_symbol				0x27673C //done
    #define allocate_user_stack_symbol			0x276F24 //done
    #define deallocate_user_stack_symbol			0x276E8C //done
    #define prx_load_module_symbol				0x8B934 //done
    #define prx_start_module_symbol				0x8A600 //done
    #define prx_stop_module_symbol				0x8B9D8 //done
    #define prx_unload_module_symbol			0x8A334 //done
    #define extend_kstack_symbol				0x72310 //done
    #define syscall_table_symbol				0x383658 //done
	#define process_rtoc_entry_1				-0x77A0
#elif defined(FIRMWARE_4_53DEX) //Ported by @Joonie, Big Thanks to @aldostools for his awesome GetSymbol Tool :)
    #define TOC                                         0x370620 //done
    #define copy_from_user_symbol                       0x100C0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xFD6C // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x624B8 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x61F1C // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
    #define page_export_to_proc_symbol                  0x62654 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x61E10 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
	//#define printf_symbol					
	#define sprintf_symbol                              0x52264 // bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
    #define snprintf_symbol                             0x521D0 // bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol                               0x50F94 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x1476C // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x26B60 // bytes matched: 0x2C  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x25698 // bytes matched: 0x58  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x24E5C // bytes matched: 0x24***  F821FF717C0802A6FBC100807C7E1B78FBA100783BA30010FBE100887FA3EB78
    #define register_thread_symbol                      0x276914 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x2770FC // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x8B938 // bytes matched: 0x44  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x8A604 // bytes matched: 0x58  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8B9DC // bytes matched: 0x28  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x8A338 // bytes matched: 0x28  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x72314 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
    #define syscall_table_symbol                        0x385108 //done
	#define process_rtoc_entry_1						-0x77A0 
#elif defined(FIRMWARE_4_55DEX)
    #define TOC                                         0x3738E0 //done
    #define copy_from_user_symbol                       0x100D0 //done
    #define copy_from_process_symbol                    0xFD7C //done
    #define page_allocate_symbol                        0x638F4 //done
    #define page_free_symbol                            0x63358 //done
    #define page_export_to_proc_symbol                  0x63A90 //done
    #define page_unexport_from_proc_symbol              0x6324C //done
	//#define printf_symbol					
	#define sprintf_symbol                              0x524A8  //done
    #define snprintf_symbol                             0x52414 //done
    #define strcmp_symbol                               0x511D8 //done
	#define ppu_thread_join_symbol                      0x1477C //done
    #define create_user_thread2_symbol                  0x26DA4 //done
    #define start_thread_symbol                         0x258DC //done
    #define run_thread_symbol                           0x250A0 /* temp name */
    #define register_thread_symbol                      0x278160 //done
    #define allocate_user_stack_symbol                  0x278948 //done
    #define prx_load_module_symbol                      0x8CD84 //done
    #define prx_start_module_symbol                     0x8BA50 //done
    #define prx_stop_module_symbol                      0x8CE28 //done
    #define prx_unload_module_symbol                    0x8B784 //done
    #define extend_kstack_symbol                        0x73750 //done
    #define syscall_table_symbol                        0x388488 //done
	#define process_rtoc_entry_1						-0x77A0 
#elif defined(FIRMWARE_4_60DEX)
    #define TOC                                         0x375500 // Checked
    #define copy_from_user_symbol                       0x100CC  // Checked
    #define copy_from_process_symbol                    0xFD78   // Checked
    #define page_allocate_symbol                        0x63CD8  // Checked
    #define page_free_symbol                            0x6373C  // Checked
    #define page_export_to_proc_symbol                  0x63E74  // Checked
    #define page_unexport_from_proc_symbol              0x63630  // Checked
	#define sprintf_symbol                              0x52438  // Checked
    #define snprintf_symbol                             0x523A4  // Checked
    #define strcmp_symbol                               0x51168  // Checked
	#define ppu_thread_join_symbol                      0x14704  // Checked
    #define create_user_thread2_symbol                  0x26D2C  // Checked
    #define start_thread_symbol                         0x25864  // Checked
    #define run_thread_symbol                           0x25028  // Checked
    #define register_thread_symbol                      0x276EF4 // Checked
    #define allocate_user_stack_symbol                  0x2776DC // Checked
    #define prx_load_module_symbol                      0x8D27C // Checked
    #define prx_start_module_symbol                     0x8BF48 // Checked
    #define prx_stop_module_symbol                      0x8D320 // Checked
    #define prx_unload_module_symbol                    0x8BC7C // Checked
    #define extend_kstack_symbol                        0x73B68  // Checked
    #define syscall_table_symbol                        0x38A120 // Checked
    #define process_rtoc_entry_1                        -0x77A0 //found at 0x1BC02 88603FC0800163DE0005E87D0000
	#define alloc_symbol								0x68168 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229F70E86900004BFFFEB8
	#define dealloc_symbol								0x685A4 // bytes matched: 0x80  E9229F707C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
	#define cellFsOpen_symbol							0x2BB2CC // bytes matched: 0x54  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78EBC22EA8
	#define cellFsClose_symbol         				     0x2BB134 // bytes matched: 0x1C  F821FF617C0802A6FBC10090EBC22EA8FBA10088F80100B07C7D1B78
	#define cellFsRead_symbol							0x2BB270 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
    #define cellFsStat_symbol                           0x2BAAE8 // bytes matched: 0x38  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78EBC22EA87C9B2378
#elif defined(FIRMWARE_4_65DEX)  // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!
    #define TOC                                         0x375510 //done
    #define copy_from_user_symbol                       0x100D0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xFD7C // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x63CDC // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x63740 // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
    #define page_export_to_proc_symbol                  0x63E78 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x63634 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
	#define printf_symbol								0x281608 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
	#define sprintf_symbol                              0x5243C // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
    #define snprintf_symbol                             0x523A8 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol								0x5116C // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x14708 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x26D30 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x25868 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x2502C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x276F00 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x2776E8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x8D280 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x8BF4C // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8D324 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x8BC80 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x73B6C // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
    #define syscall_table_symbol                        0x38A120 //done
	#define process_rtoc_entry_1						-0x77A0 //found at 0x1BC07 88603FC0800163DE0005E87D0000
#elif defined(FIRMWARE_4_66DEX)  // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!
    #define TOC                                         0x375510 //done
    #define copy_from_user_symbol                       0x100D0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_from_process_symbol                    0xFD7C // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define page_allocate_symbol                        0x63CDC // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                            0x63740 // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
    #define page_export_to_proc_symbol                  0x63E78 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol              0x63634 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
	#define printf_symbol								0x281608 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
	#define sprintf_symbol                              0x5243C // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
    #define snprintf_symbol                             0x523A8 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcmp_symbol								0x5116C // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
	#define ppu_thread_join_symbol                      0x14708 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define create_user_thread2_symbol                  0x26D30 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                         0x25868 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                           0x2502C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                      0x276F00 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                  0x2776E8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define prx_load_module_symbol                      0x8D280 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                     0x8BF4C // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                      0x8D324 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                    0x8BC80 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define extend_kstack_symbol                        0x73B6C // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
    #define syscall_table_symbol                        0x38A120 //done
	#define process_rtoc_entry_1						-0x77A0 //found at 0x1BC07 88603FC0800163DE0005E87D0000
#elif defined(FIRMWARE_4_70DEX) // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!
	#define TOC						0x375850 //done
	#define copy_from_user_symbol				0x100CC //IDA
	#define copy_from_process_symbol			0xFD78 // /IDA
	#define page_allocate_symbol				0x63D60 //  IDA
	#define page_free_symbol				0x637C4 //  IDA
	#define page_export_to_proc_symbol			0x63EFC // IDA
	#define page_unexport_from_proc_symbol			0x636B8 // IDA
	#define printf_symbol					0x278900 //  IDA
	#define sprintf_symbol					0x52438 //  IDA
	#define snprintf_symbol					0x523A4 //  IDA
	#define strcmp_symbol					0x51168 //  IDA
	#define ppu_thread_join_symbol				0x14704 //  IDA
	#define create_user_thread2_symbol			0x26D2C // Verified with IDA by Joonie
	#define start_thread_symbol				0x25864 // Verified with IDA by Joonie
	#define run_thread_symbol				0x25028 // Verified with IDA by Joonie
	#define register_thread_symbol				0x26E1F8 // Verified with IDA by Joonie
	#define allocate_user_stack_symbol			0x26E9E0 // Verified with IDA by Joonie
	#define deallocate_user_stack_symbol			0x26E948 //  IDA
	#define prx_load_module_symbol				0x8D304 //  Verified with IDA by Joonie
	#define prx_start_module_symbol				0x8BFD0 //  Verified with IDA by Joonie
	#define prx_stop_module_symbol				0x8D3A8 //  Verified with IDA by Joonie
	#define prx_unload_module_symbol			0x8BD04 // IDA
	#define extend_kstack_symbol				0x73BF0 // IDA
	#define process_rtoc_entry_1				-0x77A0 //found at 0x1BC03 88603FC0800163DE0005E87D0000
	#define syscall_table_symbol				0x38A368 //done
#elif defined(FIRMWARE_4_75DEX)
	#define TOC								0x3758E0 //
	#define copy_from_user_symbol			0x100D0 // 
	#define copy_from_process_symbol		0xFD7C // 
	#define page_allocate_symbol			0x63D64 // 
	#define page_free_symbol				0x637C8 // 
	#define page_export_to_proc_symbol		0x63F00 // 
	#define page_unexport_from_proc_symbol	0x636BC // 
	#define printf_symbol					0x278978 // 
	#define sprintf_symbol					0x4EA94 // 
	#define snprintf_symbol					0x523A8 // 
	#define strcmp_symbol					0x5116C // 
	#define ppu_thread_join_symbol			0x14708 // 
	#define create_user_thread2_symbol		0x26D30 // 
	#define start_thread_symbol				0x25868 // 
	#define run_thread_symbol				0x2502C // 
	#define register_thread_symbol			0x26E270 // 
	#define allocate_user_stack_symbol		0x26EA58 // 
	#define deallocate_user_stack_symbol	0x26E9C0 // 
	#define prx_load_module_symbol		    0x8D308 // 
	#define prx_start_module_symbol			0x8BFD4 // 
	#define prx_stop_module_symbol			0x8D3AC // 
	#define prx_unload_module_symbol		0x8BD08 // 
	#define extend_kstack_symbol			0x73BF4 // 
	#define syscall_table_symbol			0x38A3E8 //
	#define process_rtoc_entry_1			-0x77A0 // 
#elif defined(FIRMWARE_4_76DEX) || defined(FIRMWARE_4_78DEX)
	#define TOC				           	0x3758E0 //
	#define copy_from_user_symbol			0x100D0 // 
	#define copy_from_process_symbol		0xFD7C // 
	#define page_allocate_symbol			0x63D64 // 
	#define page_free_symbol				0x637C8 // 
	#define page_export_to_proc_symbol		0x63F00 // 
	#define page_unexport_from_proc_symbol	0x636BC // 
	#define printf_symbol					0x278978 // 
	#define sprintf_symbol					0x4EA94 // 
	#define snprintf_symbol					0x523A8 // 
	#define strcmp_symbol					0x5116C // 
	#define ppu_thread_join_symbol			0x14708 // 
	#define create_user_thread2_symbol		0x26D30 // 
	#define start_thread_symbol				0x25868 // 
	#define run_thread_symbol				0x2502C // 
	#define register_thread_symbol			0x26E270 // 
	#define allocate_user_stack_symbol		0x26EA58 // 
	#define deallocate_user_stack_symbol	0x26E9C0 // 
	#define prx_load_module_symbol		    0x8D308 // 
	#define prx_start_module_symbol			0x8BFD4 // 
	#define prx_stop_module_symbol			0x8D3AC // 
	#define prx_unload_module_symbol		0x8BD08 // 
	#define extend_kstack_symbol			0x73BF4 // 
	#define syscall_table_symbol			0x38A3E8 //
	#define process_rtoc_entry_1			-0x77A0 // 
#elif defined(FIRMWARE_4_80)
#define TOC                                         0x34FBA0 //done
#define open_shared_kernel_object_symbol            0x1240C // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A2C // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define open_kernel_object_symbol                   0x125FC // bytes matched: 0x80  F821FF517C0802A6FBA10098FBC100A0FBE100A8789E8402789FC622789D0620
#define alloc_symbol                                0x64820 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229EC8E86900004BFFFEB8
#define dealloc_symbol                              0x64C5C // bytes matched: 0x80  E9229EC87C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xF868 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA84 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF920 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF730 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x60390 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5FDF4 // bytes matched: 0x80  E9629C987C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x6052C // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5FCE8 // bytes matched: 0x80  E8630030480110882BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x70148 // bytes matched: 0x80  E922A1787C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x77268 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A3A8FB0100E07C781B78
#define memcpy_symbol                               0x7E928 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4D668 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4C978 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x2706A0 // bytes matched: 0x60  F821FF517C0802A6FB610088EB6219C8FBA100987C7D1B787F63DB78F8E10100
#define printfnull_symbol                           0x275114 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x4EA90 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
#define snprintf_symbol                             0x4E9FC // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4D814 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4D8DC // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4D83C // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4D744 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4D7C0 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4D868 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4D77C // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x26D78C // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x26D760 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13EC4 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13F7C // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480122598003009054000462
#define ppu_thread_join_symbol                      0x13FD0 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x287A0 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x2507C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23D48 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x23578 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x267940 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x268128 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13638 // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x135D0 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B78480092352FA300003C008001
#define mutex_lock_symbol                           0x135C8 // bytes matched: 0x80  38A000004800A58CF821FF817C0802A6FBE10078F80100907C7F1B7848009235
#define mutex_unlock_symbol                         0x135C0 // bytes matched: 0x80  48009CD44800990C38A000004800A58CF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x13074 // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x134DC // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13554 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13480 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x1306C // bytes matched: 0x80  38E0000148018190F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x1337C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13304 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13148 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2978F4 // bytes matched: 0x54  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78EBC225B0
#define cellFsClose_symbol                          0x29775C // bytes matched: 0x1C  F821FF617C0802A6FBC10090EBC225B0FBA10088F80100B07C7D1B78
#define cellFsRead_symbol                           0x297898 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x297804 // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC225B0FB410080FB6100887CDA33787CBB2B78
#define cellFsLseek_symbol                          0x296E8C // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC225B0FB410080FB6100887CDA33787C9B2378
#define cellFsStat_symbol                           0x297110 // bytes matched: 0x38  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78EBC225B07C9B2378
#define cellFsUnlink_internal_symbol                0x19C644 // bytes matched: 0x80  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x296C6C // bytes matched: 0x80  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378EBC225B0
#define cellFsUtilUmount_symbol                     0x296C40 // fixed
#define pathdup_from_user_symbol                    0x29C8D8 // bytes matched: 0x40  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78EBC225B87C992378
#define open_path_symbol                            0x29762C // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x18A968 // bytes matched: 0x58  7D800026F821FF31FBC100C0EBC2FD98FB010090FB210098FB4100A0FB6100A8
#define close_fs_object_symbol                      0x1898A4 // bytes matched: 0x80  7C83237838A00000388000004BFDE180E80300F82FA000004D9E002038000000
#define storage_get_device_info_symbol              0x279AF4 // bytes matched: 0x38  E9221DD87C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070
#define storage_open_symbol                         0x279504 // bytes matched: 0x44  E9221DD87C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C0
#define storage_close_symbol                        0x2792F4 // bytes matched: 0x3C  E9221DD87C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B78
#define storage_read_symbol                         0x278864 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x2783F0 // bytes matched: 0x80  E9621DD87C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8
#define storage_map_io_memory_symbol                0x2799B0 // bytes matched: 0x3C  E9221DD87C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378
#define storage_unmap_io_memory_symbol              0x27987C // bytes matched: 0x3C  E9221DD87C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378
#define storage_internal_get_device_object_symbol   0x277EA8 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x3496C // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4EEA4 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x58AB4 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962991878891788
#define prx_load_module_symbol                      0x88C00 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x878CC // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x88CA4 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x87600 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x87088 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x87108 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x700A0 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB6131E922A138
#define get_pseudo_random_number_symbol             0x228178 // bytes matched: 0x48  7C601B78E86203A07C8523787C04037848000404480001E4F821FF717C0802A6
#define syscall_table_symbol                        0x363BE0 //done
#define syscall_call_offset                         0x275BF8 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1A4614 // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1A6240 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1B33F8 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x282060 // fixed
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x297A8C // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x297ADC // bytes matched: 0x80  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x297B1C // bytes matched: 0x60  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             0x25B8 //found at 0x299A82 25B8E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x164B7E 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x66A0 //found at 0x598AE 99604BFFBC25392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x1DD8 //found at 0x277F76 1DD87C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2048 //found at 0x28204A 204878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x7800 //found at 0x1A152 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x59D80 // bytes matched: 0x80  F821FF617C0802A6FBC100907C9E2378E862995838810070FBA10088FBE10098
#define patch_func2_offset                          0x2C //
#define user_thread_prio_patch                      0x203F8 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x20404 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#define shutdown_patch_offset                       0xAAB8 // bytes matched: 0x14  600000044182FEFC7F83E3787F64DB787FC5F378
#define shutdown_copy_params_call                   0xAACC // bytes matched: 0x18*  2F830000409E005C7FC6F3787FA3EB78388000017F65DB78
#elif defined(FIRMWARE_4_80DEX)
#define TOC                                         0x3759B0 //done
#define open_shared_kernel_object_symbol            0x12A54 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x12074 // bytes matched: 0x3C  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define open_kernel_object_symbol                   0x12C44 // bytes matched: 0x80  F821FF517C0802A6FBA10098FBC100A0FBE100A8789E8402789FC622789D0620
#define alloc_symbol                                0x681F0 // bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol                              0x6862C // bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol                         0xFEB0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100CC // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF68 // bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD78 // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x63D60 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x637C4 // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol                  0x63EFC // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x636B8 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol               0x73C98 // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define map_process_memory_symbol                   0x7B344 // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define memcpy_symbol                               0x82A04 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51010 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x50320 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x27896C // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x27D3F4 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x52438 // bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
#define snprintf_symbol                             0x523A4 // bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x511BC // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x51284 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x511E4 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x510EC // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x51168 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x51210 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51124 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x275664 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x275638 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x145F8 // bytes matched: 0x54  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x146B0 // fixed
#define ppu_thread_join_symbol                      0x14704 // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A6E4 // bytes matched: 0x44  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26D2C // bytes matched: 0x2C  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25864 // bytes matched: 0x58  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x25028 // bytes matched: 0x24***  F821FF717C0802A6FBC100807C7E1B78FBA100783BA30010FBE100887FA3EB78
#define register_thread_symbol                      0x26E264 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x26EA4C // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13C88 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C20 // fixed
#define mutex_lock_symbol                           0x13C18 // bytes matched: 0x14**  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol                         0x13C10 // fixed
#define event_port_create_symbol                    0x136C4 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B2C // fixed
#define event_port_connect_symbol                   0x13BA4 // bytes matched: 0x20****  38A00000F80100B0FB810080FBA100887C9C23787C7D1B78E87B000038800000
#define event_port_disconnect_symbol                0x13AD0 // bytes matched: 0x18****  38800000F80100A0FBA1007838A000007C7D1B78E87C0000
#define event_port_send_symbol                      0x136BC // bytes matched: 0x2C**  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_queue_create_symbol                   0x139CC // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13954 // fixed
#define event_queue_receive_symbol                  0x13798 // bytes matched: 0x6C  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2B288C // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2B26F4 // fixed
#define cellFsRead_symbol                           0x2B2830 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2B279C // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2B1FF0 // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2B20A8 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x1A29D0 // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2B1D64 // fixed
#define cellFsUtilUmount_symbol                     0x2B1D38 // fixed
#define pathdup_from_user_symbol                    0x2B7B50 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2B25C4 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x190CF4 // bytes matched: 0x48****  FB010090FB210098FB4100A0FB6100A8FB8100B0FBE100C8FBA100B87C9A2378
#define close_fs_object_symbol                      0x18FC30 // bytes matched: 0x5C  7C83237838A00000388000004BFDE180E80300F82FA000004D9E002038000000
#define storage_get_device_info_symbol              0x289A28 // bytes matched: 0x10*  7C0802A6F821FF71F80100A0FBE10088
#define storage_open_symbol                         0x28B618 // fixed
#define storage_close_symbol                        0x28B408 // bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol                         0x28A384 // fixed
#define storage_send_device_command_symbol          0x289EA4 // bytes matched: 0x18*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000
#define storage_map_io_memory_symbol                0x28AE4C // bytes matched: 0x10*  7C0802A6F821FF61F80100B0FBE10098
#define storage_unmap_io_memory_symbol              0x28B080 // bytes matched: 0x1C*  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378
#define storage_internal_get_device_object_symbol   0x28995C // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x3828C // bytes matched: 0x28  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x5284C // bytes matched: 0x20  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5C484 // bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define prx_load_module_symbol                      0x8D304 // bytes matched: 0x44  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8BFD0 // bytes matched: 0x58  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8D3A8 // bytes matched: 0x28  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8BD04 // bytes matched: 0x28  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x8B6FC // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8B77C // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x73BF0 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x22E654 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x38A4E8 //done
#define syscall_call_offset                         0x27DED8 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1AAAC4 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1AC6F0 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1B98A8 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x29E2E4 // fixed
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2B2A24 // bytes matched: 0x24  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2B2A74 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2B2AB4 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             0x2EC0 //found at 0x2B4CFA 2EC0E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16AF0A 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65C0 //found at 0x5D27E 9A404BFFBC25392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x22B0 //found at 0x289BE6 22B07C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2638 //found at 0x296BDA 263878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1BC02 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5D750 // bytes matched: 0x10  F821FF617C0802A6FBC100907C9E2378
#define patch_func2_offset                          0x2C //
#define user_thread_prio_patch                      0x21EA8 // bytes matched: 0x30  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21EB4 // bytes matched: 0x24  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#define shutdown_patch_offset                       0xAB38 // bytes matched: 0x14  600000044182FEFC7F83E3787F64DB787FC5F378
#define shutdown_copy_params_call                   0xAB4C // bytes matched: 0x18*  2F830000409E005C7FC6F3787FA3EB78388000017F65DB78
#endif
#endif /* __FIRMWARE_SYMBOLS_H_S__ */
