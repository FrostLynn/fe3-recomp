#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C118C8
// Address: 0x1c118c8 - 0x1c119d8
void sub_01C118C8_0x1c118c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C118C8_0x1c118c8");
#endif

    switch (ctx->pc) {
        case 0x1c118e8u: goto label_1c118e8;
        case 0x1c118fcu: goto label_1c118fc;
        case 0x1c11900u: goto label_1c11900;
        case 0x1c1191cu: goto label_1c1191c;
        case 0x1c1192cu: goto label_1c1192c;
        case 0x1c11978u: goto label_1c11978;
        case 0x1c119b4u: goto label_1c119b4;
        case 0x1c119c0u: goto label_1c119c0;
        default: break;
    }

    ctx->pc = 0x1c118c8u;

    // 0x1c118c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c118c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c118cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c118ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c118d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c118d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c118d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c118d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c118d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c118d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c118dc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c118dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c118e0: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C118E0u;
    SET_GPR_U32(ctx, 31, 0x1C118E8u);
    ctx->pc = 0x1C118E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C118E0u;
    // 0x1c118e4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C118E0u, 0x1C118E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C118E8u;
label_1c118e8:
    // 0x1c118e8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c118e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c118ec: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C118ECu;
    {
        const bool branch_taken_0x1c118ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C118F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C118ECu;
        // 0x1c118f0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c118ec) {
            ctx->pc = 0x1C11938u;
            goto label_1c11938;
        }
    }
    ctx->pc = 0x1C118F4u;
    // 0x1c118f4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C118F4u;
    {
        const bool branch_taken_0x1c118f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c118f4) {
            ctx->pc = 0x1C11914u;
            goto label_1c11914;
        }
    }
    ctx->pc = 0x1C118FCu;
label_1c118fc:
    // 0x1c118fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c118fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c11900:
    // 0x1c11900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c11904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c11908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1190c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1190Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1190Cu;
        // 0x1c11910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1190Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11914u;
label_1c11914:
    // 0x1c11914: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C11914u;
    SET_GPR_U32(ctx, 31, 0x1C1191Cu);
    ctx->pc = 0x1C11918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11914u;
    // 0x1c11918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C11914u, 0x1C1191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1191Cu;
label_1c1191c:
    // 0x1c1191c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C1191Cu;
    {
        const bool branch_taken_0x1c1191c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C11920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1191Cu;
        // 0x1c11920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1191c) {
            ctx->pc = 0x1C118FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c118fc;
        }
    }
    ctx->pc = 0x1C11924u;
    // 0x1c11924: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C11924u;
    SET_GPR_U32(ctx, 31, 0x1C1192Cu);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C11924u, 0x1C1192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1192Cu;
label_1c1192c:
    // 0x1c1192c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C1192Cu;
    {
        const bool branch_taken_0x1c1192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1192Cu;
        // 0x1c11930: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1192c) {
            ctx->pc = 0x1C11900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11900;
        }
    }
    ctx->pc = 0x1C11934u;
    // 0x1c11934: 0x0  nop
    ctx->pc = 0x1c11934u;
    // NOP
label_1c11938:
    // 0x1c11938: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c11938u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c1193c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C1193Cu;
    {
        const bool branch_taken_0x1c1193c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C11940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1193Cu;
        // 0x1c11940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1193c) {
            ctx->pc = 0x1C11900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11900;
        }
    }
    ctx->pc = 0x1C11944u;
    // 0x1c11944: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c11944u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c11948: 0x3c0e01c2  lui         $t6, 0x1C2
    ctx->pc = 0x1c11948u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)450 << 16));
    // 0x1c1194c: 0x25ce9320  addiu       $t6, $t6, -0x6CE0
    ctx->pc = 0x1c1194cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294939424));
    // 0x1c11950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11954: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c11954u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c11958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1195c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c1195cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c11960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c11960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11964: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c11964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c11968: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1196c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c1196cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11970: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11970u;
    SET_GPR_U32(ctx, 31, 0x1C11978u);
    ctx->pc = 0x1C11974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11970u;
    // 0x1c11974: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11970u, 0x1C11978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11978u;
label_1c11978:
    // 0x1c11978: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c11978u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1197c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C1197Cu;
    {
        const bool branch_taken_0x1c1197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1197Cu;
        // 0x1c11980: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1197c) {
            ctx->pc = 0x1C118FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c118fc;
        }
    }
    ctx->pc = 0x1C11984u;
    // 0x1c11984: 0x0  nop
    ctx->pc = 0x1c11984u;
    // NOP
    // 0x1c11988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1198c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c1198cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c11990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11994: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c11994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11998: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c11998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1199c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1199cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c119a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c119a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c119a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c119a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c119a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c119a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c119ac: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C119ACu;
    SET_GPR_U32(ctx, 31, 0x1C119B4u);
    ctx->pc = 0x1C119B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C119ACu;
    // 0x1c119b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C119ACu, 0x1C119B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C119B4u;
label_1c119b4:
    // 0x1c119b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c119b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c119b8: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C119B8u;
    SET_GPR_U32(ctx, 31, 0x1C119C0u);
    ctx->pc = 0x1C119BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C119B8u;
    // 0x1c119bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C119B8u, 0x1C119C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C119C0u;
label_1c119c0:
    // 0x1c119c0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c119c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c119c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c119c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c119c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c119c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c119cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C119CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C119D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C119CCu;
        // 0x1c119d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C119CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C119D4u;
    // 0x1c119d4: 0x0  nop
    ctx->pc = 0x1c119d4u;
    // NOP
    ctx->pc = 0x1c119d8u;
}
