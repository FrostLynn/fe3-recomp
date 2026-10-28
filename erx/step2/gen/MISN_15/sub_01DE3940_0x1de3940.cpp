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

// Function: sub_01DE3940
// Address: 0x1de3940 - 0x1de39f0
void sub_01DE3940_0x1de3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3940_0x1de3940");
#endif

    switch (ctx->pc) {
        case 0x1de3964u: goto label_1de3964;
        case 0x1de398cu: goto label_1de398c;
        case 0x1de39a8u: goto label_1de39a8;
        case 0x1de39b8u: goto label_1de39b8;
        case 0x1de39c8u: goto label_1de39c8;
        default: break;
    }

    ctx->pc = 0x1de3940u;

    // 0x1de3940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de3940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de3944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de3948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de3948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de394c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de3950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de3950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3954: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1de3954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1de3958: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1de3958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de395c: 0xc778e26  jal         func_1DE3898
    ctx->pc = 0x1DE395Cu;
    SET_GPR_U32(ctx, 31, 0x1DE3964u);
    ctx->pc = 0x1DE3960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE395Cu;
    // 0x1de3960: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3898u, 0x1DE395Cu, 0x1DE3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3964u;
label_1de3964:
    // 0x1de3964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de3964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3968: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de3968u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de396c: 0x104f0014  beq         $v0, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DE396Cu;
    {
        const bool branch_taken_0x1de396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE396Cu;
        // 0x1de3970: 0x284e0002  slti        $t6, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de396c) {
            ctx->pc = 0x1DE39C0u;
            goto label_1de39c0;
        }
    }
    ctx->pc = 0x1DE3974u;
    // 0x1de3974: 0x55c00005  bnel        $t6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE3974u;
    {
        const bool branch_taken_0x1de3974 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de3974) {
            ctx->pc = 0x1DE3978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE3974u;
            // 0x1de3978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE398Cu;
            goto label_1de398c;
        }
    }
    ctx->pc = 0x1DE397Cu;
    // 0x1de397c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1de397cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de3980: 0x104f0007  beq         $v0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE3980u;
    {
        const bool branch_taken_0x1de3980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3980u;
        // 0x1de3984: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3980) {
            ctx->pc = 0x1DE39A0u;
            goto label_1de39a0;
        }
    }
    ctx->pc = 0x1DE3988u;
    // 0x1de3988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de3988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de398c:
    // 0x1de398c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de398cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de3990: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de3990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de3994: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1de3994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de3998: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3998u;
        // 0x1de399c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE39A0u;
label_1de39a0:
    // 0x1de39a0: 0xc778dd8  jal         func_1DE3760
    ctx->pc = 0x1DE39A0u;
    SET_GPR_U32(ctx, 31, 0x1DE39A8u);
    ctx->pc = 0x1DE39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE39A0u;
    // 0x1de39a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3760u, 0x1DE39A0u, 0x1DE39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE39A8u;
label_1de39a8:
    // 0x1de39a8: 0x26040390  addiu       $a0, $s0, 0x390
    ctx->pc = 0x1de39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
    // 0x1de39ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1de39acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de39b0: 0xc778dc6  jal         func_1DE3718
    ctx->pc = 0x1DE39B0u;
    SET_GPR_U32(ctx, 31, 0x1DE39B8u);
    ctx->pc = 0x1DE39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE39B0u;
    // 0x1de39b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3718u, 0x1DE39B0u, 0x1DE39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE39B8u;
label_1de39b8:
    // 0x1de39b8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1DE39B8u;
    {
        const bool branch_taken_0x1de39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE39B8u;
        // 0x1de39bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de39b8) {
            ctx->pc = 0x1DE398Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de398c;
        }
    }
    ctx->pc = 0x1DE39C0u;
label_1de39c0:
    // 0x1de39c0: 0xc778dd8  jal         func_1DE3760
    ctx->pc = 0x1DE39C0u;
    SET_GPR_U32(ctx, 31, 0x1DE39C8u);
    ctx->pc = 0x1DE39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE39C0u;
    // 0x1de39c4: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3760u, 0x1DE39C0u, 0x1DE39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE39C8u;
label_1de39c8:
    // 0x1de39c8: 0x26040390  addiu       $a0, $s0, 0x390
    ctx->pc = 0x1de39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
    // 0x1de39cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de39ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de39d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1de39d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de39d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de39d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de39d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de39d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de39dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1de39dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de39e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1de39e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de39e4: 0x8778dc6  j           func_1DE3718
    ctx->pc = 0x1DE39E4u;
    ctx->pc = 0x1DE39E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE39E4u;
    // 0x1de39e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3718u;
    sub_01DE3718_0x1de3718(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE39ECu;
    // 0x1de39ec: 0x0  nop
    ctx->pc = 0x1de39ecu;
    // NOP
    ctx->pc = 0x1de39f0u;
}
